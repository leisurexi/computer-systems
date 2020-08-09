//
// 程序的機器級表示
// Created by leisurexi on 8/9/20.
//

// 將下面的匯編代碼轉換爲C代碼
/*
 * decode1:
 * xp in %rdi, yp in %rsi, zp in %rdx
 *  movq    (%rdi), %r8
 *  movq    (%rsi), %rcx
 *  movq    (%rdx), %rax
 *  movq    %r8, (%rsi)
 *  movq    %rcx, (%rdx)
 *  movq    %rax, (%rdi)
 * */
void decode1(long *xp, long *yp, long *zp) {
    long temp1 = *xp;
    long temp2 = *yp;
    long temp3 = *zp;
    *yp = temp1;
    *zp = temp2;
    *xp = temp3;
}
