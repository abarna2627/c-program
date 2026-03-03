#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int stops[N];
    for (int i = 0; i< N; i ++){
        scanf("%d",&stops[i]);
    }
        int left = 0;
        int right = N - 1;
        while(left < right){
            int temp = stops[left];
            stops[left] = stops[right];
            stops[right] = temp;
            left++;
            right--;
        }
            for(int i =0; i<N; i++){
                printf("%d ", stops[i]);
                
            }
            return 0;
}
