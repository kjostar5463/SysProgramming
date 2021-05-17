#include <stdio.h>
#include <stdio_ext.h>
int main(){
	char a;
	while(1){
		printf("문자 입력 : ");
		scanf("%c", &a);
		if(a=='0') break;
		if(a>96){
			printf("%c의 대문자는 %c 입니다.\n", a, a-32);
			__fpurge(stdin);
		}
		else{
			printf("%c의 소문자는 %c 입니다.\n", a, a+32);
			__fpurge(stdin);
		}
	}
	return 0;
}
