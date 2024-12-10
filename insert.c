//Archisman Das,Stream:CSE,Sec-B,2nd Year,3rd SEM,Stream Change//
#include <stdio.h>
int main()
{
   int array[100], pos, i, n, val;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
 
   printf("Enter the location to insert an element\n");
   scanf("%d", &pos);
 
   printf("Enter the value to insert\n");
   scanf("%d", &val);
 
   for (i = n - 1; i >= pos - 1; i--)
      array[i+1] = array[i];
 
   array[pos-1] = val;
 
   printf("Updated array is\n");
 
   for (i = 0; i <= n; i++)
      printf("%d\t", array[i]);
 
   return 0;
}