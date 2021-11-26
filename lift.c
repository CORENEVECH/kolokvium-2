#include <stdio.h>

int main(void)
{
    int n, k, s = 0;
    do{
        printf("input N: ");
        scanf("%i", &n);
        printf("input K: ");
        scanf("%i", &k);
    } while (n < 0 || k < 0 || n > 1000 || k > 1000);
    int array[n];
    int temp = k;
    for (int i = 0; i < n; ++i) {
        array[i] = temp;
        temp += 4;
    }

    for (int i = 1; i < n; ++i) {
        s += array[i];
    }
    printf("%i", s);
}