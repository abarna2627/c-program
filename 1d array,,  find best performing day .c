#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int leaders[N];
    int count = 0;
    int max_from_right = INT_MIN;

    for(int i = N - 1; i >= 0; i--) {
        if(arr[i] >= max_from_right) {
            leaders[count++] = arr[i];
            max_from_right = arr[i];
        }
    }

    
    for(int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}s