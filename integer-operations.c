//
// 整数运算示例
// Created by leisurexi on 2020/7/29.
//


#include <math.h>
#include "binary-utils.h"

// 无符号数加法溢出，x + y > T(max) 代表溢出
// 計算公式： x + y - 2^W
void unsigned_add() {
    unsigned char x = 255;
    unsigned char y = 2;
    printf("x: ");
    print_binary(sizeof(char), &x);
    printf("y: ");
    print_binary(sizeof(char), &y);
    unsigned char result = x + y;
    printf("result: ");
    print_binary(sizeof(char), &result);
}

// 补码加法负溢出，x + y > T(min) 代表负溢出
// 计算公式: x + y + 2^W
void signed_add_negative_overflow() {
    char x = -128;
    char y = -1;
    char result = x + y;
    printf("x: ");
    print_binary(sizeof(char), &x);
    printf("y: ");
    print_binary(sizeof(char), &y);
    printf("result: ");
    print_binary(sizeof(result), &result);
}

// 补码加法正溢出，x + y > T(max) 代表正溢出
// 计算公式: x + y - 2^W
void signed_add_positive_overflow() {
    char x = 127;
    char y = 1;
    char result = x + y;
    printf("x: ");
    print_binary(sizeof(char), &x);
    printf("y: ");
    print_binary(sizeof(char), &y);
    printf("result: ");
    print_binary(sizeof(result), &result);
}

// 無符號數加法，不会溢出返回1
int unsigned_add_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    return sum >= x;
}

// 無符號數減法，不会溢出返回1
int unsigned_sub_ok(unsigned x, unsigned y) {
    unsigned sum = x - y;
    printf("x: %u, y: %u, sum: %u\n", x, y, sum);
    return sum < x;
}

// 补码加法，不会溢出返回1
int signed_add_ok(int x, int y) {
    int sum = x + y;
    printf("x: %d, y: %d, sum: %d\n", x, y, sum);
    int negative = x < 0 && y < 0 && sum >= 0;
    int positive = x >= 0 && y >= 0 && sum < 0;
    return !negative && !positive;
}

// 补码減法，不会溢出返回1
int signed_sub_ok(int x, int y) {
    if (y == -2147483648) {
        return x < 0;
    }
    return signed_add_ok(x, -y);
}

// 无符号数乘法，丢弃超出位数的高位
// 计算公式: (x * y) % 2^w
void unsigned_multiply() {
    unsigned char x = 127;
    unsigned char y = 100;
    unsigned char result = x * y;
    printf("x dec: %d，bin: ", x);
    print_binary(sizeof(char), &x);
    printf("y dec: %d, bin: ", y);
    print_binary(sizeof(char), &y);
    printf("result dec: %d, bin: ", result);
    print_binary(sizeof(result), &result);
}

// 补码乘法
// 计算公式: (x * y) % 2^w
void signed_multiply() {
    char x = -127;
    char y = 100;
    char result = x * y;
    printf("x dec: %d，bin: ", x);
    print_binary(sizeof(char), &x);
    printf("y dec: %d, bin: ", y);
    print_binary(sizeof(char), &y);
    printf("result dec: %d, bin: ", result);
    print_binary(sizeof(result), &result);
}

// 优化乘法，因为大多数机器上整数乘法非常慢，所以用移位和加法运算来代替
void optimization_multiply() {
    char x = -127;
    char y = 64;
    // 这里向左位移6位，就相当于乘以64
    char result = x << 6;
    printf("x dec: %d，bin: ", x);
    print_binary(sizeof(char), &x);
    printf("y dec: %d, bin: ", y);
    print_binary(sizeof(char), &y);
    printf("result dec: %d, bin: ", result);
    print_binary(sizeof(result), &result);
}

// 有符号数乘法，未溢出返回1
int signed_multiply_is_ok(int x, int y) {
    int z = x * y;
    // 当 x 等于0或者可以用除法验算回来的时候代表是未溢出的
    return !x || z / x == y;
}

// 有符號數除法
// 如果直接除以-1那麼結果爲-2147483648，因爲底層做了優化，在匯編層面被優化成取負指令neg
void signed_division() {
    int a = 0x80000000;
    int b = -1;
    int c = a / -1;
    printf("%d\n", c);
}

// 优化除法，大多数机器上整数除法非常慢，所以除以2的幂的都可以用右移运算来替代
void optimization_division() {
    char x = 100;
    char y = 4;
    char divResult = 100 / 4;
    char bitResult = 100 >> 2;
    printf("x dec: %d，bin: ", x);
    print_binary(sizeof(char), &x);
    printf("y dec: %d, bin: ", y);
    print_binary(sizeof(char), &y);
    printf("divResult dec: %d, bin: ", divResult);
    print_binary(sizeof(divResult), &divResult);
    printf("bitResult dec: %d, bin: ", bitResult);
    print_binary(sizeof(bitResult), &bitResult);
}

// 求出n除以32的結果，只可以使用位運算和加法
// 如果是正數，可以直接向右位移5位來實現
// 如果是負數，先用 n + 2^5-1，再向右位移5位
int div32(int n) {
    if (n >= 0) {
        return n >> 5;
    } else {
        return (n + 31) >> 5;
    }
}


int main() {
    // 无符合数加法
//    unsigned_add();
    // 补码加法负溢出
//    signed_add_negative_overflow();
    // 补码加法正溢出
//    signed_add_positive_overflow();
//    int result = tadd_ok(127, 1);
//    printf("%d", result);
    // 无符号数乘法
//    unsigned_multiply();
    // 有符号数乘法
//    signed_multiply();
    // 优化乘法
//    optimization_multiply();
    // 优化除法
//    optimization_division();
    // 判定兩個無符號數相加是否溢出
//    int result = unsigned_add_ok(2147483647, 1);
    // 判定兩個無符號數相減是否溢出
//    int result = unsigned_sub_ok(4294967295, -1);
    // 判定兩個有符號數相減是否溢出
//    int result = signed_sub_ok(-1, -0x80000000);
//    optimization_division();
    // 有符号数判断乘法是否溢出
//    int result = signed_multiply_is_ok(2147483647, 2);
    // 有符號數除法
//    signed_division();
    //
    int result = div32(-89);
    printf("the result: %d\n", result);
    return 0;
}
