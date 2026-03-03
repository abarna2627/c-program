#include <stdio.h>

int main() {
    int N;
    int i, num;
    int expectedSum = 0, actualSum = 0;
scanf("%d", &N);


    expectedSum = N * (N + 1) / 2;

    for(i = 0; i < N - 1; i++) {
        scanf("%d", &num);
        actualSum += num;
    }

  
    printf("%d\n", expectedSum - actualSum);

    return 0;
}