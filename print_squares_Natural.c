/* Write a recursive function to print squares of first N natural numbers */

#include<stdio.h>

void printNSquares(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printNSquares(n);

    return 0;
}

void printNSquares(int n)
{

    if(n == 1){
        printf("%d ", n*n);
    }
    else{
        printNSquares(n - 1);
        printf("%d ", n*n);
    }

}