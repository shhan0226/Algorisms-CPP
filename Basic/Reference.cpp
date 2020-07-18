#include <iostream>
#include <cstdlib>
#include <cstring>


using namespace std;

// input step1. <string(int)>

int main()
{

	/* >>> getline(cin, str1)
	 * include <>
	 * : cin:input(), str1:storage	*/

	string str1;
	getline(cin, str1);
	cout << str1 << '\n';

	/* >>> st1.c_str()
	 * include <cstdlib>
	 * : string-->char*		*/

	/* >>> strcpy(char_buff, str1.c_str());
	 * include <cstring>
	 * : char_buff:dest, str1.c_str():orgin	*/

	char *char_buff = new char[500];
	strcpy(char_buff, str1.c_str());
	cout << char_buff << '\n';

	/* >>> atoi( );
	 * include <cstirng>
	 * : char-->int		*/
	int int_buff = atoi(char_buff);
	cout << int_buff << '\n';

}
