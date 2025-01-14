#include <stdio.h>

int main()
{
    int a[10], b, c, sum = 0;

    printf("Enter the size of the array (max 10): ");
    scanf("%d", &b);

    if (b > 10 || b <= 0) {
        printf("Invalid size! Enter a number between 1 and 10.\n");
        return 1; // Exit the program if size is invalid
    }

    printf("Enter %d elements for the array:\n", b);
    for (int i = 0; i < b; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter a number (c): ");
    scanf("%d", &c);

    // Calculate sum based on given logic
    for (int i = 0; i < b; i++) {
        sum += a[i];
    }
    sum += c;

    printf("The Result is %d\n", sum);
    return 0;
}

