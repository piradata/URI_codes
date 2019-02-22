#include <stdio.h>

int main(void)
{
	int A[3502], N, I, K, Y, n, r, pos;

//A é matriz q guarda numeros primos
//N é repedidor secundario(numero do primo a ser testado)
//I é repetidor primario(numero atual)
//K é quantidade de numeros primos
//Y é variavel de deslocamento de valor para K

	A[1] = 2;
	A[2] = 3;
	K = 2;
	Y = 2;
	for(I = 3; K < 3501; I = I + 2, K = Y)
	{
		for(N = 2; N <= K; N++)
		{
			if(I % A[N] == 0)
				break;
			if((N == K) || (A[N] > (1 + (I / A[N]))))
			{
				Y++;
				A[Y] = I;
				break;
			}
		}
	}

	while(1)
	{
		scanf("%d", &n);
		if(n ==0) break;
		for(r = 1; r <= n; r++)
			pos = (r == 1) ? 1 : ((pos + A[n - r + 1] - 1) % r) + 1;
		printf("%d\n", pos);
	}
	return 0;
}
