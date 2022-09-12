/* Write a recursive function to print first N even natural numbers */

#include<stdio.h>

void printEvenNatural(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printEvenNatural(n);

    return 0;
}

void printEvenNatural(int n)
{

    if(n == 1){
        printf("%d ", n*2);
    }
    else{
        printEvenNatural(n - 1);
        printf("%d ", n*2);
    }

}