#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int main() {
    printf("Hello,World!");
    int num1 = 2;
    int num2 = 3;
    int acc_1 = add(num1,num2);
    printf("The result is ",acc_1);

    int acc_2 = mul(num1,num2);
    printf("The result is ",acc_2);
    return 0;
}