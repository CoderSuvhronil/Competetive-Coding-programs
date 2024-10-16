#include <stdio.h>
#include <math.h>

// Function to find the number of digits
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if the number is a Tech Number
int isTechNumber(int num) {
    int digits = countDigits(num);

    if (digits % 2 != 0)  // Must have even number of digits
        return 0;

    int divisor = pow(10, digits / 2);
    int firstPart = num / divisor;
    int secondPart = num % divisor;

    return (pow(firstPart + secondPart, 2) == num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isTechNumber(num))
        printf("%d is a Tech Number\n", num);
    else
        printf("%d is not a Tech Number\n", num);

    return 0;
}

