#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
if (N <= 0) {
        printf("0\n");
        return 0;
    }
int visitors[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &visitors[i]);
    }
int uniqueCount = 0;
for (int i = 0; i < N; i++) {
        int isDuplicate = 0;
       for (int j = 0; j < i; j++) {
            if (visitors[i] == visitors[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueCount++;
        }
    }
printf("%d\n", uniqueCount);
    return 0;
}