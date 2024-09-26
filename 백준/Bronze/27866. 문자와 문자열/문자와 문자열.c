#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	char S[1001];
	int i;
	scanf("%s",S);  
	//%c는 문자 변수,, %s는 문자열 변수 ,,, char형 변수는 %c로 char 변수이름[]배열 변수는 %s로
	//s[1]-> s의 2번쨰 값이라는 뜻 S->? 이건 배열 s의 메모리주소를 가짐,,, &연산자는 변수의 메로리 주소를 알려주는 역할 --->따라서 배열에 값을 저장할떄는 배열 이름 앞에 &연산자를 붙이면 안된다. ***배열이름[인덱스]형태는 값을 나타내므로 &연산자를 붙여야함
	scanf("%d", &i);
	printf("%c", S[i-1]);
	
	

	return 0;
}