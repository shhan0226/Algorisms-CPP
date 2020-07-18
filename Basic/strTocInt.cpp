#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int main()
{

	string str1;
	getline(cin,str1); //cin:input, str1:storage
	int count = 0; 

	string strResult[10];
	char *str_buff = new char[1000];
	strcpy(str_buff, str1.c_str());

	char *tok = strtok(str_buff, " ");
	while (tok != NULL){
		strResult[count++] = string(tok);
		tok = strtok(NULL, " ");
	}

	int A = atoi(strResult[0].c_str()); // atoi() : char-->int
	int B = atoi(strResult[1].c_str());

	int Result = A + B ;
	cout<<Result;

	return 0;
}
