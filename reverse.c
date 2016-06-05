#include <stdio.h>

int main(void) {
	char a[10001];
	scanf("%s",a);
	int i;
	for(i=strlen(a)-1;i>=0;i--){
		printf("%c",a[i]);
	}
	return 0;
}
