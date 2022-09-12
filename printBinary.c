/* Write a recursive function to print binary of a given decimal number */

#include<stdio.h>

void printBinary(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printBinary(n);

    return 0;
}

void printBinary(int n)
{
    if(n/2 == 0){
        printf("%d ", n%2);
    }
    else{
        printBinary(n/2);
        printf("%d ", n%2);
    }
}