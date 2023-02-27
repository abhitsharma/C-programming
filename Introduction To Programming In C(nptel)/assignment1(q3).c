#include <stdio.h>
void main(){
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
  if(a>b && a> c && b>c)
  {
    printf("1");
  }
   else if(a<b && a< c && b<c)
  {
    printf("1");
  }
  else{
     printf("0");
  }
}
