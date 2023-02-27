#include <stdio.h>

int main() {
    int n1, n2, a1[19], a2[19], flag, max=0;
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }

    for (int i = 0; i < n1; i++) {
        flag = 1;
        for (int j = 0; j < n2; j++) {
            if (a1[i] == a2[j]) {
                flag = 0;
                break;
            }
        }
        if (flag && a1[i] > max) {
            max = a1[i];
        }
    }

   if(flag=1)
  {
    printf("%d",max);
  }
    else{
     
    printf("%d",flag);
    }
    return 0;
}
