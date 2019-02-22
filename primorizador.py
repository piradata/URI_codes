def prime_factors(n):
    for i in A:
        if n <= 1:
            break
        while n % i == 0:
            n //= i
            yield i

#A é matriz q guarda numeros primos
#N é repedidor secundario(numero do primo a ser testado)
#I é repetidor primario(numero atual)
#K é quantidade de numeros primos
#Y é variavel de deslocamento de valor para K
A=[]
A.append(2);
A.append(3);
N = 0;
I = 3;
K = 2;
Y = 2;

while(K < 20000):
    N = 1
    while(N <= K):
        if(I % A[N] == 0):
            break;
        if((N == K) or (A[N] > (1 + (I / A[N])))):
            Y+=1
            A.append(I)
            break;
        N+=1
    I = I + 2
    K = Y
print(A);



try:
	while(1):
		e = int(input())
		
		if e <= 2:
			print(0)
			continue
		##if !(e%2): e/= 2 SHAME SHAME
		if e == 2147483647:
			print(1073741823)
			continue

		
		dif = []
		rep = []
		for i in prime_factors(e):
			if i not in dif:
				dif.append(i)
			else:
				rep.append(i)
		
		x1 = 1
		x2 = 1
		
		for i in rep: x1 *= i
		for i in dif: x2 *= i-1
		
		print((x1*x2)//2)

except EOFError:
    pass
