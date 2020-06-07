#include<stdio.h> 
#define SIZE 50 
 
struct student
 { 
     char name[30]; 
     int rollno; 
     int sub[3];
     int marks; 
     float avg; 
 }; 
 
int main() 
{ 
    int i, j , total, n ;
    struct student st[SIZE]; 
    printf("Enter how many students: "); 
    scanf("%d", &n); 
    for (i = 0; i < n; i++) 
    { 
        printf("\nEnter name and roll number for students : ");
        scanf("%s \t %d",st[i].name,&st[i].rollno);
        printf("The marks of 3 subjects are: \n");
        for(j=0;j<=2;j++)
        scanf("%d",&st[i].sub[j]);
    }  
 
for (i = 0; i < n; i++)
 { 
     total = 0; 
     for (j = 0; j < 3; j++) 
     { 
         total = total + st[i].sub[j]; 
     } 
     st[i].avg=total/3.0; 
     printf("\nTotal marks obtained by %s are : %d", st[i].name,total); 
     printf("\nAverage marks obtained : %f", st[i].avg); 
     if (st[i].avg >=50) 
     printf("\n %s scored above the average marks\n",st[i].name); 
     else 
     printf("\n %s scored below the average marks\n",st[i].name);
 } 
 return 0;
} 