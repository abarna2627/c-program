#include <stdio.h>

int main() {
    int N, K;

   
scanf("%d", &N);

    int shifts[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &shifts[i]);
    }

    scanf("%d", &K);

 
for(int i = 0; i < K; i++) {
        int first = shifts[0];
        for(int j = 0; j < N - 1; j++) {
            shifts[j] = shifts[j + 1];
        }
        shifts[N - 1] = first;
    }

  
    for(int i = 0; i < N; i++) {
        printf("%d ", shifts[i]);
    }

    return 0;
}