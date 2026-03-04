#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
if (N <= 0) {
        printf("0\n");
        return 0;
    }

    int prices[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &prices[i]);
    }

    int minPrice = prices[0];
    int maxProfit = prices[1] - prices[0]; 

    for (int i = 1; i < N; i++) {
        int profit = prices[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    printf("%d\n", maxProfit);
    return 0;
}