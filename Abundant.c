#include <stdio.h>

int sumOfDivisors(int num) 
{
    int i, sum = 0;
    for (i = 1; i <= num / 2; i++) 
	{
        if (num % i == 0) 
		   sum = sum + i;
    }
    return sum;
}

int isAbundant(int num) 
{
    return sumOfDivisors(num) > num;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isAbundant(num))
        printf("%d is an Abundant Number\n", num);
    else
        printf("%d is not an Abundant Number\n", num);

    return 0;
}
