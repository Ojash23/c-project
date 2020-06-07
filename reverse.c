#include<stdio.h>
#include<conio.h>
void main()
{
    int n, rev=0,rem=0;
    printf("Enter the value of n : \n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        n--;
        rev=rev*10 + rem;
    }
    printf("The reversed number is : %d",rev);
    getch();
}