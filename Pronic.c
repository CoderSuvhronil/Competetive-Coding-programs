#include <stdio.h>

int isPronicNumber(int num) 
{
	int i;
    for (i = 0; i <= num; i++) 
	{
        if (i * (i + 1) == num)
            return 1;
    }
    return 0;
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPronicNumber(num))
        printf("%d is a Pronic Number\n", num);
    else
        printf("%d is not a Pronic Number\n", num);

    return 0;
}
