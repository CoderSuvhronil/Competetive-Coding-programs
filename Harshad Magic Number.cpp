#include <stdio.h>

int sumOfDigits(int num) 
{
    int sum = 0;
    while (num > 0) 
	{
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int reduceToSingleDigit(int num) 
{
    while (num >= 10) 
	{
        num = sumOfDigits(num);
    }
    return num;
}

int isHarshadMagicNumber(int num) 
{
    return (num % sumOfDigits(num) == 0 && reduceToSingleDigit(num) == 1);
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isHarshadMagicNumber(num))
        printf("%d is a Harshad Magic Number\n", num);
    else
        printf("%d is not a Harshad Magic Number\n", num);

    return 0;
}
