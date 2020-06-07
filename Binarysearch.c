#include <stdio.h> 
#include <conio.h>
 int main()
 { while(1)
  { 
  int c, first, last, middle, n, search, array[100];
  printf(" \n Enter number of elements\n");
   scanf("%d",&n); 
   printf("Enter %d integers in ascending order \n", n); 
   for (c = 0; c < n; c++)
    scanf("%d",&array[c]); 
    printf("Enter value to find\n"); 
    scanf("%d", &search); 
    first = 0; 
    last = n - 1;
     middle = (first+last)/2;
      while (first <= last)
       { if (array[middle] == search)
        break; 
        else if (array[middle] < search) 
        first = middle + 1;
         else
          last = middle - 1; 
          middle = (first + last)/2; 
} if (first > last)
 printf("Not found %d !", search);
  else
   printf("%d found at location %d.\n", search, middle+1);
    return 0;
  }  
} 