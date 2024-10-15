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

int isHarshadNumber(int num) 
{
    return (num % sumOfDigits(num) == 0);
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isHarshadNumber(num))
        printf("%d is a Harshad/Niven Number\n", num);
    else
        printf("%d is not a Harshad/Niven Number\n", num);

    return 0;
}
