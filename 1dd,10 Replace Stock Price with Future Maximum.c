#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 if(n == 0) {
        return 0;
    }

    int max_from_right = arr[n - 1];
    arr[n - 1] = -1;   

 for(int i = n - 2; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = max_from_right;
        
        if(temp > max_from_right) {
            max_from_right = temp;
        }
    }

  for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}