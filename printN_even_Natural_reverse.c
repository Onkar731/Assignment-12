/* Write a recursive function to print first N even natural numbers in reverse order */

#include<stdio.h>

void printEvenNaturalReverse(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printEvenNaturalReverse(n);

    return 0;
}

void printEvenNaturalReverse(int n)
{

    if(n > 0){
        printf("%d ", n*2);
        printEvenNaturalReverse(n-1);
    }

}