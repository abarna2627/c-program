#include <stdio.h>

int main() {
  int N;
  int day;
  int evencount =0,  oddcount=0;
  scanf("%d",&N);
  for(int i = 0; i < N; i++){
      scanf("%d",&day);
      if(day % 2 == 0){
      evencount++;
      }
      else{
      oddcount++;
      
  }
  }
  printf("Even:%d ",evencount);
  printf("Odd:%d ",oddcount);
    return 0;
}