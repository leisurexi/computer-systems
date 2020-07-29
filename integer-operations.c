//
// 整数运算示例
// Created by leisurexi on 2020/7/29.
//

#include "binary-utils.h"

// 无符号数加法
// 如果结果大于最大值(例如单字节无符号数的最大值为255)，就将结果的二进制丢弃超出位数的高位，
// 也就相当于结果值减去最大值
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

// 补码加法，不会溢出返回1
int tadd_ok(int x, int y) {
    int result = x + y;
    int negative = x < 0 && y < 0 && result >= 0;
    int positive = x >= 0 && y >=0 && result < 0;
    return !negative && !positive;
}

// 无符号数乘法，丢弃超出位数的高位
// 计算公式: (x * y) % 2^w
void unsigned_multiply() {
    unsigned char x = 127;
    unsigned char y = 100;
    unsigned char result = x * y;
    printf("x: ");
    print_binary(sizeof(char), &x);
    printf("y: ");
    print_binary(sizeof(char), &y);
    printf("result: ");
    print_binary(sizeof(result), &result);
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
    unsigned_multiply();

    return 0;
}
