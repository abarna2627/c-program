#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 

    if (N <= 0) {
        printf("Yes\n"); 
        return 0;
    }

    int codes[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &codes[i]);
    }

    int isUnique = 1;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (codes[i] == codes[j]) {
                isUnique = 0; 
                break;
            }
        }
        if (!isUnique) {
            break;
        }
    }

    if (isUnique) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}