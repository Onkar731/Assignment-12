/* Write a recursive function to print first N odd natural numbers in reverse order */

#include<stdio.h>

void printOddNaturalReverse(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printOddNaturalReverse(n);

    return 0;
}

void printOddNaturalReverse(int n)
{

    if(n > 0){
        printf("%d ", n*2-1);
        printOddNaturalReverse(n-1);
    }

}