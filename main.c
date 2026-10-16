
#include <stdio.h>

int sumDigits(int n) {
    int sum = 0, r;

    if (n == 0) {
        printf("Error!");
    }

    while (n > 0) {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d", sumDigits(number));

    return 0;
}
