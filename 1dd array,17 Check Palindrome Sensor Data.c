#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    if (N <= 0) {
        printf("No\n"); 
        return 0;
    }

    int readings[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &readings[i]);
    }

    int isPalindrome = 1; 
    for (int i = 0; i < N / 2; i++) {
        if (readings[i] != readings[N - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}