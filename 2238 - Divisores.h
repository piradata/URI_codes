#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
	long int A, B, C, D;
	long int result = -1;
	int K, x, y;

	scanf("%li%li%li%li", &A, &B, &C, &D);

	int CA = C / A;
	int AK;
	
	for(K = 2; K <= (CA / K) + 1; K++)
	{
		x = y = 0;
		AK = A * K;

		if((C % AK) == 0)
		{
			if(D >= AK)
				if((D % AK) != 0)x = 1;
				else x = 0;
			else x = 1;
			if(x == 1)
			{
				if(B <= AK)
				{
					if((AK % B) != 0)y = 1;
					else y = 0;
				}
				else y = 1;
			}
		}
		if(y)
		{
			result = AK;
			break;
		}
	}
	printf("%li\n", result);
	return 0;
}