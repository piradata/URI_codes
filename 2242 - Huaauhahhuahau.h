#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
	char stro[51];
	char strn[51];
	char stri[51];
	int i;
	int x;

	scanf("%s", stro);

	x = 0;

	for(i = 0; i <= int(strlen(stro)); i++)
	{
		if(stro[i] == 'a' || stro[i] == 'e' || stro[i] == 'i' || stro[i] == 'o' || stro[i] == 'u')
		{
			strn[x] = stro[i];
			++x;
		}
		if(stro[i] == '\0')
		{
			strn[x] = '\0';
			break;
		}
	}

	x = 0;

	for(i = strlen(strn) - 1; i >= 0; i--)
	{
		stri[x] = strn[i];
		++x;
	}
	
	stri[x] = '\0';

	// printf("%s\n", stro);
	// printf("%i\n\n", strlen(stro));
	//
	// printf("%s\n", strn);
	// printf("%i\n\n", strlen(strn));
	//
	// printf("%s\n", stri);
	// printf("%i\n\n", strlen(stri));

	if(strcmp(strn, stri)) printf("N\n");
	else printf("S\n");

	return 0;
}