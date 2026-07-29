#include <stdio.h>

int main()
{
    int a[6], n, i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++){
        key = a[i];

        for(j = i - 1; j >= 0 && a[j] > key; j--){
            a[j + 1] = a[j];
        }

        a[j + 1] = key;
    }

    printf("Sorted elements are:\n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
