#include <stdio.h>

int main() {
    int N, X, count = 0;

 scanf("%d", &N);

    int marks[N];
for(int i = 0; i < N; i++) {
        scanf("%d", &marks[i]);
    }

  scanf("%d", &X);

for(int i = 0; i < N; i++) {
        if(marks[i] == X) {
            count++;
        }
    }

   printf("%d\n", count);

    return 0;
}