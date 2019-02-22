d={}
x=0
for i in range(48,58):
    d[chr(i)]=x
    x+=1
for i in range(65,91):
    d[chr(i)]=x
    x += 1
for i in range(97,123):
    d[chr(i)]=x
    x += 1

while True:
    try:
        entrada = list(input())
    except (EOFError, ValueError):
        break

    try:
        if entrada[0]=='-':
            del entrada[0]
    except IndexError:
        break

    teste=0
    soma=0
    for algo in entrada:
        soma+=d[algo]
        teste = d[algo] if d[algo] > teste else teste

    if teste<2:
        print(2)
    else:
        while(True):
            if soma%teste==0:
                print(teste+1)
                break
            else:
                teste = teste + 1
                if teste > 63:
                    print("such number is impossible!")
                    break