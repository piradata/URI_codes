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

while(K < 15000):
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