#include <stdio.h>
int main() {
    int n, i, num;
    int max, min;
    int evenCount = 0, oddCount = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num;

    if(num % 2 == 0)
        evenCount++;
    else
        oddCount++;

    for(i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > max)
            max = num;
        if(num < min)
            min = num;
        if(num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nMaximum number = %d\n", max);
    printf("Minimum number = %d\n", min);
    printf("Even numbers count = %d\n", evenCount);
    printf("Odd numbers count = %d\n", oddCount);

    return 0;
}
