/* Write a recursive function to print first N natural numbers */

#include<stdio.h>

void printNatural(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printNatural(n);

    return 0;
}

void printNatural(int n)
{

    if(n == 1){
        printf("%d ", n);
    }
    else{
        printNatural(n - 1);
        printf("%d ", n);
    }

}