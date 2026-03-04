#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    if (N <= 0) {
        printf("0\n");
        return 0;
    }

    int growth[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &growth[i]);
    }

    int maxLen = 1;    
    int currentLen = 1;

    for (int i = 1; i < N; i++) {
        if (growth[i] > growth[i - 1]) {
            currentLen++;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        } else {
            currentLen = 1; 
        }
    }

    printf("%d\n", maxLen);
    return 0;
}
