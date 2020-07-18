#include <stdio.h>
// g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0

int main(void)
{

	/* printf(); */
	printf("/* printf(); */\n");
	printf("1 = %d\n", 1);

	printf("------------------------------\n");
	/* 변수 출력 */ 
	printf("/* 변수 출력 */\n");
	printf("[int val = 1]\n\n");

	int val = 1;			// value| 1 |
	printf("&val = %p\n", &val);
	printf("- size: %ld\n", sizeof(&val));
	
	printf("\n");
	
	printf("val = %d\n", val);
	printf("- size: %ld\n", sizeof(val));


	
	printf("------------------------------\n");
	/* 포인터 변수  출력 */
	printf("/* 포인터 변수  출력 */\n");
	printf("[int *ptr = &val]\n\n");

	int *ptr;
	ptr = &val;			// ptr| value_;addr |

	printf("&ptr = %p\n", &ptr);
	printf("- size: %ld\n", sizeof(&ptr));

	printf("\n");

	printf("ptr = %p\n", ptr);
	printf("- size: %ld\n", sizeof(ptr));
	
	printf("\n");

	printf("*ptr = %d\n", *ptr);
	printf("- size: %ld\n", sizeof(*ptr));


	
	printf("------------------------------\n");
	/* 포인터 변수 배열  출력 */
	printf("/* 포인터 변수 배열  출력 */\n");
	printf("[int *ptr = &val2[3] = {3, 2, 1} ]\n\n");

	int val2[3]={3, 2, 1};
	ptr = val2;

	printf("&ptr = %p\n", &ptr);
	printf("- size: %ld\n", sizeof(&ptr)); //선언한 포인터 주소

	printf("\n");

	printf("ptr = %p\n", ptr);
	printf("- size: %ld\n", sizeof(ptr)); // 할당된 배열 주소
	
	printf("\n");

	printf("*ptr = %d\n", *ptr); //할당된 배열 주소의 값
	printf("- size: %ld\n", sizeof(*ptr));

	printf("\n[+1]\n\n");

	printf("&ptr+1 = %p\n", &ptr+1); // 포인터 주소 값 증감, &에다 증감은 의미 없음
	printf("- size: %ld\n", sizeof(&ptr+1));

	printf("\n");

	printf("ptr+1 = %p\n", ptr+1); // 할당된 배열 주소의 대상체 만큼  증감
	printf("- size: %ld\n", sizeof(ptr+1));
	
	printf("\n");

	printf("*ptr+1 = %d\n", *ptr+1); // 할당된 배열 주소의 값에 +1
	printf("- size: %ld\n", sizeof(*ptr+1));

	printf("\n[*+ use]\n\n");
	
	printf("*(ptr+1) = %d\n", *(ptr+1) ); // 대상체 만큼 증감후 값 
	printf("- size: %ld\n", sizeof(*ptr+1));

	printf("\n");

	printf("Result : prt[1] = %d = *(ptr+1) = %d\n", ptr[1], *(ptr+1));
	printf("- size: %ld, %ld\n", sizeof(ptr[1]), sizeof(*(ptr+1)));


	printf("------------------------------\n");
        /* 2차원 배열 선언 */
        printf("/* 2차원 배열 선언 */\n");
	printf("[ array[2][3] = { {11,12,13}, {21,22,23} }]\n");
	
	int array[2][3] = { {11,12,13}, {21,22,23} };

        /* 2차원 배열 포인터 변수 (*pptr)[]; pptr-> */
        printf("\n/* 2차원 배열 포인터 변수 (*pptr)[]; pptr-> */\n");
	printf("[ int (*pptr)[3]; pptr=array ]\n\n");
	
	int (*pptr)[3];

	pptr = array;

	printf("array[1] =(d) %d\n", array[1] );
	printf("array[1] =(p) %p\n", array[1] );
	printf("- size: %ld\n", sizeof( array[1] ));
	printf("\n");

	printf("*(pptr+0) =(d) %d\n", *(pptr+1) );
	printf("*(pptr+0) =(p) %p\n", *(pptr+1) );
	printf("- size: %ld\n", sizeof( *(pptr+1) ));
	printf("\n");


	printf("*(*(pptr+0)+1)) = %d\n", *(*(pptr+0)+1) );

	/* 2차원 포인터 변수 *temp[2]; temp[0]->, temp[1]-> */
	printf("/* 2차원 포인터 변수 *temp[2]; temp[0]->, temp[1]-> */\n");

	int *temp[2];
	printf("temp = array; --> error");



}
