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

int isMagicNumber(int num) 
{
    while (num > 9) 
	{
        num = sumOfDigits(num);
    }
    return (num == 1);
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isMagicNumber(num))
        printf("%d is a Magic Number\n", num);
    else
        printf("%d is not a Magic Number\n", num);

    return 0;
}

