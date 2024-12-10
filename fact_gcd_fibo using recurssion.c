#include<stdio.h>

int fact(int num)
{
if(num==1)
return num;
return num * fact(num-1);

}

int gcd(int x,int y)
{
 if(x > y)
        gcd(x-y, y);

    else if(y > x)
        gcd(x, y-x);
    else
    return x;
}

int fibo(int n)
{
if (n <= 1)
        return n;
else
    return fibo(n-1) + fibo(n-2);
}

main()
{
    int num,num1,num2, n, i, choice;
    printf("\nPress 1 To Find Factorial of a Number");
    printf("\nPress 2 To Find GCD of Two numbers");
    printf("\nPress 3 To print Fibonacci series");
    printf("\nEnter Your Choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the number - ");
        scanf("%d",&num);
        printf("%d",fact(num));
        break;
    case 2:
        printf("Enter the number following space or enter - ");
        scanf("%d%d",&num1,&num2);
        printf("%d",gcd(num1,num2));
        break;
    case 3:
        printf("Enter the number of turms - ");
        scanf("%d",&num);
        for ( i = 0 ; i <num ; i++ )
					{
						printf("%3d", fibo(i));
					}
        break;
    default:
        return 0;
    }
}