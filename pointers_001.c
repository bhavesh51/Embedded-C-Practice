#include<stdio.h>

int main(void)
{
    printf("pointers intro \n");
    int a; //declare int variable 
    int *p; // declare int pointer variable
    p = &a; // assgin address of a to pointer variable
    a = 10; // assgin value 10 to a variable
    printf("value of p : %d \n", p);
    printf("value of &a : %d \n", &a);
    printf("value of &p : %d \n", &p);
    printf("value of *p : %d \n", *p);
    *p = 111;  // its a dereferncing of pointer
    printf("value after change of *p : %d \n", *p);
    printf("value after change of a : %d \n", a);
}