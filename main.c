/*
 Write a C program to input an integer and check whether it is even or odd using the ternary operator.
 */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a;
    printf("Enter your number:");
    scanf("%d",&a);
     (a%2==0)? printf("even"):printf("odd");

}
