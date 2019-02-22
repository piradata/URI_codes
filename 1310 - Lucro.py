##EOF kill

while True:
    try:
        dias = int(input())
    except (EOFError, ValueError):
        break

    ##recebendo entrada

    custo = int(input())
    lucro = []
    for d in range(dias):
        lucro.append(int(input()) - custo)

    ##tratando entrada

    c = 0
    party = []
    for l in lucro:
        if abs(c + l) == abs(c) + abs(l):
            c = c + l
        else:
            party.append(c)
            c = l
    party.append(c)

    ##cortando pontas
    #print("party = " + str(party))

    if party[0] == 0:
        print(0)
    else:
        if party[0] < 0:
            del party[0]
        if party == []:
            print(0)
        else:
            if party[-1] < 0:
                del party[-1]

            # aqui começa o code

            res = 0
            while (len(party) > 1):
                boon = party[0] + party[1]
                #print("party = " + str(party))
                #print("res = " + str(res))
                if boon>0:
                    boon = boon + party[2]
                    if party[0] > res:
                        res = party[0]
                    del party[0:3]
                    party.insert(0, boon)
                else:
                    if party[0] > res:
                        res = party[0]
                    del party[0:2]
            #print("party = " + str(party))
            #print("res = " + str(res))
            if party[0] > res:
                res = party[0]
            #print("party = " + str(party))
            #print("res = " + str(res))
            print(res)

            # XD