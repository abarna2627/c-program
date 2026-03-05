#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    if (N <= 0) {
        printf("-1\n");
        return 0;
    }

    int transactions[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &transactions[i]);
    }

    int found = -1;
for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (transactions[i] == transactions[j]) {
                found = transactions[i];
                break;
            }
        }
        if (found != -1) {
            break;
        }
    }

    printf("%d\n", found);
    return 0;
}