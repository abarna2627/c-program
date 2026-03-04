#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int orders[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &orders[i]);
    }

    int pos = 0;
    for (int i = 0; i < N; i++) {
        if (orders[i] != 0) {
            orders[pos] = orders[i];
            pos++;
        }
    }


    for (int i = pos; i < N; i++) {
        orders[i] = 0;
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d ", orders[i]);
    }

    return 0;
}