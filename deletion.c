//Archisman Das,Stream:CSE,Sec-B,2nd Year,3rd SEM,Stream Change//
#include <stdio.h>
int main()
{
   int array[100], pos, i, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the location to delete element\n");
   scanf("%d", &pos);
      for (i = pos - 1; i < n - 1; i++)
         array[i] = array[i+1];

      printf("The Updated array:\n");

      for (i = 0; i < n - 1; i++)
        printf("%d\t", array[i]);

   return 0;
}