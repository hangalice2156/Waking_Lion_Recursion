#include<stdio.h>
#include<stdlib.h>

int fib_series(int);
int main()
{
    int length = 0;
	printf("please give the length you want for Fibonacci series:\n");
	scanf("%d",&length);

    printf("Fibonacci numbers:\n");
	if(length >= 0)
    {
        for(int i = 0; i < length; i++)
        {
            printf("%d ",fib_series(i));
        }
    }
    else
    {
        printf("Please input right number!!\n");
    }
}

int fib_series(int n)
{
    if(n <= 1)
        return 1;
    else
        return (fib_series(n-1) + fib_series(n-2));
}
