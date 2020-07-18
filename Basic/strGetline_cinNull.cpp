#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>

using namespace std;

// input step1. <int> \n
// input step2. <int> <space> <int> ; loop

int main()
{
	cin.tie(NULL);	//cin isoration
	ios::sync_with_stdio(false); 

	string str1;
	int cnt_n = 0;

	getline(cin, str1);
	cnt_n = atoi(str1.c_str());
	string s[cnt_n];
	char *cstr = new char[500];
	int re[2], count = 0;
	string s2[2];

	for(int i =0; i< cnt_n; i++)
	{		
		getline(cin, s[i]);

		count = 0;
		strcpy(cstr, s[i].c_str());
		char *tok = strtok(cstr, " ");
		while( tok != NULL)
		{
			s2[count++] = string(tok);
			tok = strtok( NULL, " ");
		}
		memset(cstr, 0, sizeof(char)*500);
		re[1] = atoi(s2[1].c_str());
		re[0] = atoi(s2[0].c_str());
		cout<< re[0] + re[1] <<endl;
	}

	return 0;
}
