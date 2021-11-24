#define _CRT_SECURE_NO_DEPRECATE 
#include <cstdio> 
#include <cstring> 
#include <stdlib.h> 
#include <iostream>

using namespace std;

bool IsIdentSymb(char str2 [], char ch)
{
	for (int i = 0; str2[i]; i++) if (str2[i] == ch) return true;
	return false;
	
}

void DelChar(char str[], int pos)
{
	int p = pos;
	while (str[p] = str[p + 1]) p++;

	
}


void IsResult(char str[], char str2[])
{
	
	for (int i = strlen(str) - 1; i >= 0; i--)
		if (str[i] && IsIdentSymb(str2, str[i]))
			DelChar(str, i);
}


int main()
{
	char Str[100];
	char DelStr[100];
	printf("Enter a first string: "); gets_s(Str, _countof(Str));
	printf("Enter a second string: "); gets_s(DelStr, _countof(DelStr));
	IsResult(Str, DelStr);
	printf("Cleared string is: %s\n", Str);
   
    system("pause");
    return 0;
}

