#include <stdio.h>

void printTribonacci(int n) 
{
    int a = 0, b = 1, c = 1, d, i;

    printf("Tribonacci Sequence: %d %d %d ", a, b, c);
    for (i = 3; i < n; i++) 
	{
        d = a + b + c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }
}

int main() 
{
    int n;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printTribonacci(n);
    return 0;
}
