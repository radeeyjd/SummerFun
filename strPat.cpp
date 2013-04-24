#include <iostream>
#include <cstring>
using namespace std;

int findPattern(char str1[], char str2[])
{
	int iii = 0, 
		jjj = 0, 
		currentIndex = 0;
 	
	while( iii < strlen(str1) && jjj < strlen(str2))
	{
		if( str1[iii] == str2[jjj])
		{
			iii++;
			jjj++;
		}
		else
		{
			currentIndex++;
			iii = currentIndex;
			jjj = 0;	
		}
	}
		
	if( jjj == strlen(str2))
		return currentIndex;
	else 
		return -1;

}

int strLength(char str[])
{
	int len = 0;
	while(str[len] != '\0')
		len++;
	return len;
}

int main()
{
	char s_baseStr[100],
		 s_patStr[100];
	cout << "Enter the Base String : ";
	cin >> s_baseStr;
	cout << "Enter the pattern to match : ";
	cin >> s_patStr;
	
	cout << findPattern(s_baseStr, s_patStr) << endl;
	cout << strLength(s_baseStr);

}


