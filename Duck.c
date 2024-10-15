#include <stdio.h>
#include <conio.h> 

int isDuckNumber(int num) {
    int hasZero = 0;  // 0 for false, 1 for true

    while (num > 0) {
        if (num % 10 == 0)
            hasZero = 1;
        num = num / 10;
    }
    return hasZero;
}

int main() {
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num > 0 && isDuckNumber(num)) {
        printf("%d is a Duck Number\n", num);
    } else {
        printf("%d is not a Duck Number\n", num);
    }

    return 0;
}

