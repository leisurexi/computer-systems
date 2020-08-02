#include <stdio.h>

int main() {
    int x = -1;
    unsigned u = 2147483648;
    printf("x=%u=%d\n", x, x);
    printf("u=%u=%d\n", u, u);
    int result = -2147483648 < 2147483647;
    printf("the result: %d", result);

    return 0;
}
