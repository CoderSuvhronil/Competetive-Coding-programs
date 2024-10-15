#include<stdio.h>

int isBuzzNumber (int num)
{
	return (num % 7 == 0 || num % 10 == 7);
}

int main()
{
	int num;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	if (isBuzzNumber(num))
	   printf("%d is a Buzz Number\n", num);
	else
	   printf("%d is not a Buzz Number\n", num);
	
	return 0;
}
