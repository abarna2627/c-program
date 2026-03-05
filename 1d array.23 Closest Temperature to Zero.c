
#include <stdlib.h> 

int main() {
    int N;
    scanf("%d", &N); 
    if (N <= 0) {
        printf("0\n"); 
        return 0;
    }

    int temps[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &temps[i]);
    }

    int closest = temps[0];

    for (int i = 1; i < N; i++) {
        if (abs(temps[i]) < abs(closest)) {
            closest = temps[i];
        } else if (abs(temps[i]) == abs(closest) && temps[i] > 0) {
            closest = temps[i]; 
        }
    }

    printf("%d\n", closest);
    return 0;
}