#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int z[n];
  for(int i=0; i<n; i++){
      scanf("%d", &z[i]);

  }
  int sum = 0;
  for(int i=0; i<n; i++){
      sum += z[i];
  }
  printf("%d\n", sum);

}
