#include<stdio.h> 
#include<conio.h> 
void main() 
{  
    while(1)
    {
    float num,s; 
    int i; 
    printf(" \n  \v Enter a number to which square root to be found :"); 
    scanf("%f",&num); 
    if(num>0) 
    { 
        s=num/2; 
        for(i=0;i<num;i++) 
        s=(s+(num/s))/2; 
        printf("square root of a real number %.3f is %.3f", num,s); 
        } 
        else 
        printf("Sorry Invalid Number \n"); 
        getch(); 
    } 
}