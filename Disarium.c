#include<stdio.h>
#include<math.h>

int isDisarium(int num)
{
	int sum = 0, temp = num, digits = 0;
	
	while (temp != 0)
	{
		digits++;
		temp = temp / 10;
	}
	
	temp = num;
	
	while (temp != 0)
	{
		int digit = temp % 10;
		sum = sum +pow(digit, digits--);
		temp = temp / 10;
	}
	return sum == num;
}

int main()
{
	int num; 
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	if (isDisarium(num))
		printf("%d is a Armstrong Number\n", num);
	else
	   printf("%d is not an Armstrong Number\n", num);
	   
	return 0;
}
