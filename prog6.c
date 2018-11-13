//prog6
#include <stdio.h>

int getSmallestFactor(int in);



int main(){
  int in, fact;
  scanf("%d", &in);

  while (1) {
    fact = getSmallestFactor(in);
    if(fact > 0){
      printf("%d\n", fact);
      in = in / fact;
    }else{
      printf("%d\n", in);
      break;
    }
  }
}
