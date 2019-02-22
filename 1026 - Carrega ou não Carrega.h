#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{
	long unsigned int x, y;

	while(scanf("%lu%lu", &x,&y) != EOF)printf("%lu\n",x^y);
	
    return(0);
}