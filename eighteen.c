// Write a C program to find factorial of a number
#include<stdio.h>
int main(){
    int n = 6;
    int fact = 1;

    for (int i = 1; i<= n; i++){
        fact = fact * i;
    }
    printf("Factorial of %d = %d\n",n, fact);
    return 0;
}