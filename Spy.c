#include<stdio.h>
#include<conio.h>

int isSpyNumber(int n)
{
	int sum = 0, product = 1, digit;
	
	while(n > 0)
	{
		digit = n % 10;
		sum = sum + digit;
		product = product * digit;
		n = n /10;
	}
	return (sum == product);
}

int main()
{
	int n;
	
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	if (isSpyNumber (n))
	    printf("%d is a Spy Number\n", n);
	else
	    printf("%d is a Spy Number\n", n);
	    
	
	return 0;
}
