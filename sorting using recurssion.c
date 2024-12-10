//Bubble sort Selection sort in a menu driven program -----
#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void printarr(int arr[],int size)
{
int i;
printf("sorted array is =");
for ( i = 0; i < size; i++)
{
printf("%3d",arr[i]);
}

}
void bubble(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
    printarr(arr,n);
}
void selection(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        int small = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[small]>arr[j])
            {
               small=j;
            }
        }
         swap(&arr[i],&arr[small]);
    }
    printarr(arr,n);
}
main()
{
    int *arr, n, i, choice;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("\nEnter array elements :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nPress 1 To sort using Bubble Sort");
    printf("\nPress 2 To sort using Selection Sort");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        bubble(arr,n);
        break;
    case 2:
        selection(arr,n);
        break;
    default:
        return 0;
    }
}