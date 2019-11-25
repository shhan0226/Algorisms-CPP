#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>


#define MAX 100

void main(){
		
	char *num;
	int i ;
	num = (char*)malloc( (sizeof(char)*MAX));
	num = "asdjflkjasldfjlksjd;flkjsa;ldjf;;skldfjklsdlkfjkljvocuvicuoviuozpxcuvoauoduofpuasdofuosiadufposadpfuio";
		
	
	for(i=0; i<80; i++){
	if(i%10 == 0){printf("\n");}
	printf("%c", num[i]);
	}
}
