//Archisman Das,IT-2nd year,Sec-A,Roll-58 University Roll- 10900220058
#include<stdio.h>
#define row1 2
#define col1 2
#define row2 col1
#define col2 3
int main(){
	int i,j,a[row1][col1],b[row2][col2],c[row1][col2],n,k;
	printf("Enter the elements for a matrix:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements for b matrix:\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<row1;i++)
	for(j=0;j<col2;j++)
	{
		c[i][j]=0;
		for(k=0;k<col1;k++)
		c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
	}
	printf("The matrix c is:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		
			printf("%5d",c[i][j]);
			printf("\n",c[i][j]);
		
	}
	return 0;
	}