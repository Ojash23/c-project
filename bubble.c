#include<stdio.h>
 #include<conio.h> 
 void main() 
 { 
     int a[50], n, i, j, temp = 0; 
     printf("Enter the size an array:\n"); 
     scanf("%d", &n); 
     printf("Enter the %d elements of an array:\n", n); 
     for (i = 0; i < n; i++) 
     { 
         scanf("%d", &a[i]);
     }
      printf("\n \n \t The given array before sorting is: \n"); 
     for (i = 0; i < n; i++) 
     {
      printf("\n\t\t %d", a[i]); 
     }  
     for (i = 1; i < n; i++)
      { 
          for (j = 0 ; j < n-i-1; j++) 
      { 
          if (a[j] > a[j+1]) 
          { 
              temp = a[j];
               a[j] = a[j+1];
                a[j+1] = temp;
          } 
      } 
} 
printf("\n\n\n\t\tThe sorted array is:\n"); 
for (i = 0; i < n; i++)
 {
      printf("\n\t\t %d", a[i]);
 }
  getch();
 } 
 
 