
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = 0;
    for(int i = 0; i < n; i++) {
        total += arr[i];
    }

    int leftSum = 0;

    for(int i = 0; i < n; i++) {
        int rightSum = total - leftSum - arr[i];

        if(leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }

        leftSum += arr[i];
    }

    printf("-1");
    return 0;
}