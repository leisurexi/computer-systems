//
// Created by leisurexi on 8/18/20.
//

// if structure
int get_cont(int *p1, int *p2) {
    if (p1 > p2)
        return *p2;
    else
        return *p1;
}

// switch case structure
int sw_test(int a, int b, int c) {
    int result;
    switch (a) {
        case 15:
            c = b & 0x0f;
        case 10:
            result = c + 50;
            break;
        case 12:
        case 17:
            result = b + 50;
            break;
        case 14:
            result = b;
            break;
        default:
            result = a;
    }
    return result;
}

int main() {
    int a = 1, b = 2, c = 3;
    get_cont(&a, &b);
    sw_test(a, b, c);
    return 0;
}
