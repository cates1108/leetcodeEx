#include "stdio.h"
#include "string.h"

char* reverseString(char* s)
{
int str_len = strlen(s);
int i;
char* reverse;

for(i = 0; i < (str_len /2); i++)
{
	reverse[i] = s[str_len -i - 1];
	reverse[str_len - i -1] = s[i];
	printf("%c %c\n",reverse[i], reverse[str_len - i - 1]);
}
return reverse;
}

void main(void)
{
	char* s = "123456";
	char* s2 = reverseString(s);
//	printf("%d\n",strlen(s));
}
