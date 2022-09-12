/* Write a recursive function to print first N odd natural numbers */

#include<stdio.h>

void printOddNatural(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printOddNatural(n);

    return 0;
}

void printOddNatural(int n)
{

    if(n == 1){
        printf("%d ", n*2-1);
    }
    else{
        printOddNatural(n - 1);
        printf("%d ", n*2-1);
    }

}