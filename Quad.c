#include<stdio.h> 
#include<conio.h> 
#include<math.h>
 int main() 
{ 
int n;
printf("Press 1 to recall and 0 to end: \n");
scanf("%d",&n);
 while(n!=0)
 {
  int a,b,c,d;
  float x1,x2;
  printf(" \n \v Enter the three co-efficient \n");
  scanf("%d%d%d",&a,&b,&c); 
    if((a==0) || (b==0))
     { 
     printf("invalid input!!!");
     getch(); 
     } 
      else
     { 
      d=b*b-4*a*c; 
         if(d>0)
              { 
                printf("roots are real and distinct\n");
                x1=-b+sqrt(d)/(2.0*a);
                 x2=-b-sqrt(d)/(2.0*a); 
                printf("root1=%f root2=%f",x1,x2);
              } 
              else if(d==0)
            { 
                printf("root are real and equal\n"); 
                x1=x2=-b/(2.0*a);
                 printf("root1=%f root2=%f",x1,x1); 
            }
else
  { 
      printf("roots are imaginary\n");
       x1= -b/(2.0*a); x2= sqrt(fabs(d))/(2.0*a);
        printf("root1=%.2f+%.2fi root2=%.2f-%.2fi",x1,x2,x1,x2); 
  }
     } 
 } 
getch(); 
}  
                 