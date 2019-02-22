#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{
	int i, Q, M;

	scanf("%i", &Q);

	int C[Q - 1];

	M = 0;

	for(i = 0; i <= Q - 1; i++)
	{
		scanf("%i", &C[i]);
		if(C[i] > M)M = C[i];
	}

	long long unsigned int F[M];
	
	F[0] = 0;
	F[1] = 1;

	for(i = 2; i <= M; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	
	for(i = 0; i <= Q - 1; i++)
	{
		printf("Fib(%i) = %llu\n", C[i], F[C[i]]);
	}

	return 0;
}