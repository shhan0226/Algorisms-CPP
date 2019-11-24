#include <stdio.h>

int main(void)
{
	char num1;
	int num2;
	float num3;

	printf("문자를 입력하세요 : ");
	scanf("%c",&num1);
	
	printf("정수를 입력하세요 : ");
	scanf("%d",&num2);

	printf("실수를 입력하세요 : ");
	scanf("%f",&num3);
	
	printf("문자 = %c, 정수 = %d, 실수 = %f",num1,num2,num3);

}
