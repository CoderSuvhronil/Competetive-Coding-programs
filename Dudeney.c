#include <stdio.h>
#include <math.h>

int isDudeneyNumber(int num) 
{
    int sum = 0, temp = num;

    while (temp > 0) 
	{
        sum += temp % 10;
        temp /= 10;
    }

    return (sum == cbrt(num));
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isDudeneyNumber(num))
        printf("%d is a Dudeney Number\n", num);
    else
        printf("%d is not a Dudeney Number\n", num);

    return 0;
}

