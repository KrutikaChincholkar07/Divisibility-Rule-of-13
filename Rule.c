#include <stdio.h>

int main() {
    int num, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 100) {
        int lastDigit = temp % 10;
        temp = temp / 10 + 4 * lastDigit;
    }

    if (temp % 13 == 0)
        printf("%d is divisible by 13", num);
    else
        printf("%d is not divisible by 13", num);

    return 0;
}
