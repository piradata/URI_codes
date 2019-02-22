#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	int A, B, C;
	scanf("%i%i%i",&A,&B,&C);
	if((A==(B+C))||(B==(A+C))||(C==(B+A))||(A==B)||(A==C)||(B==C))printf("S\n");
	else printf("N\n");
	return 0;
}