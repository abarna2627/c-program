#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isSorted = 1;  

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted)
        printf("Yes");
    else
        printf("No");

    return 0;
}