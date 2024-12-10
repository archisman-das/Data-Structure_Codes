// Jyotiraditya Chatterjee,IT-2nd year,Sec-B,Roll-65 University Roll- 10900220065
//Insert an element in an array using POSITION
#include<stdio.h>
#include<conio.h>

int main()
 {
  int funcpos(int p,int q,int n1,int arr[]);
 int arr[100];
 int i,n,x,y;
 printf("Enter the no of elements of array \n");
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
 	printf("Enter no \n");
 	scanf("%d",&arr[i]);
 }
 printf("The array is \n");
 for(i=0;i<n;i++)
 {
   printf("%d\t",arr[i]);
}

printf("\n Enter the position to add the no \n");
scanf("%d",&x);
printf("Enter the value \n");
scanf("%d",&y);
funcpos(x,y,n,arr);
return 0;
}

funcpos(int p,int q,int n1,int arr[])
{
  int a,b;
  for(a=0;a<n1;a++)
 {
 	if((a+1)==p)
	 {
	
  	 for(a=n1;a>=p;a--)
	   { 
	    arr[a]=arr[a-1];
       }
  	 arr[p-1]=q;
    }
 }
 printf("%d is inserted! \n",q);
printf("New inserted array is \n");
 for(a=0;a<=n1;a++)
 {
   printf("%d\t",arr[a]);
}

}