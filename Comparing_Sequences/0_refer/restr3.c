#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

char* Restr(char *p)
{
	int i, len;
	char temp;
	len = strlen(p);
	printf("%d\n",len);
	
	for(i=0; i<len; i++)
	{
		temp = p[i];
		p[i] = p[len-1-i];
		p[len-1-i] = temp;
//		printf("%d\t",i);
	}
/*	printf("\n");
	for(i=0; i<len; i++){ printf("%c\t",p[i]); }*/
	return p;	
}

void main(){
	int i,max;
	char* p = (char*)malloc(sizeof(char)*10);
	p = "ABEd df g";
	printf("%s\n",p);

	//p = Restr(p);	
	
	printf("=>%s",Restr(p) );

}
