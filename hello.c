#include<stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello,World!");
    int num1 = 2;
    int num2 = 3;
    int acc = add(num1,num2);
    printf("The result is ",acc);
    return 0;
}