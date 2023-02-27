#include <stdio.h>

int find_factorial(int k){
  if (k==1)
    return 1;
  else
    return k*find_factorial(k-1);
}

int main(){
    int n,k;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&k);
        printf("%d ", find_factorial(k));
    }
    
    return 0;
}
