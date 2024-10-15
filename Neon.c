#include <stdio.h>

int isNeonNumber(int num) 
{
    int square = num * num;
    int sum = 0;

    while (square > 0) 
	{
        sum += square % 10;
        square /= 10;
    }

    return (sum == num);
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isNeonNumber(num))
        printf("%d is a Neon Number\n", num);
    else
        printf("%d is not a Neon Number\n", num);

    return 0;
}

