#include <stdio.h>

int isBouncyNumber(int num) 
{
    int increasing = 0, decreasing = 0;
    int prev = num % 10;
    num = num / 10;

    while (num > 0) 
	{
        int curr = num % 10;
        if (curr < prev) increasing = 1;
        if (curr > prev) decreasing = 1;

        if (increasing && decreasing)
            return 1;

        prev = curr;
        num = num / 10;
    }
    return 0;
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isBouncyNumber(num))
        printf("%d is a Bouncy Number\n", num);
    else
        printf("%d is not a Bouncy Number\n", num);

    return 0;
}

