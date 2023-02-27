#include<stdio.h>
int main() {
int n, a[1010], b[1010], cnt = 0;
scanf("%d", &n);
for (int i = 0; i < n; i++) {
scanf("%d", &a[i]);
int j;
for (j = 0; j < cnt; j++) {
if (b[j] == a[i]) {
break;
}
}
if (j == cnt) {
b[cnt++] = a[i];
}
}
printf("%d", cnt);
return 0;
}
