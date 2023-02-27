#include<stdio.h>
#include<string.h>

void replaceChar(char primaryString[], char c, char s[]) {
int len = strlen(primaryString);
for (int i = 0; i < len; i++) {
if (primaryString[i] == c) {
printf("%s", s);
} else {
printf("%c", primaryString[i]);
}
}
}

int main() {
char primaryString[100], c, s[10];
scanf("%s", primaryString);
scanf(" %c", &c);
scanf("%s", s);
replaceChar(primaryString, c, s);
return 0;
}
