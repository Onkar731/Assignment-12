/* Write a recursive function to print octal of a given decimal number */

#include<stdio.h>

void printOctal(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printOctal(n);

    return 0;
}

void printOctal(int n)
{
    if(n/8 == 0){
        printf("%d ", n%8);
    }
    else{
        printOctal(n/8);
        printf("%d ", n%8);
    }
}