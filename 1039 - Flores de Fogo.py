while 1:
    try:
        R1,X1,Y1,R2,X2,Y2 = map(int,input().split())
        
        if R1<R2:
            print("MORTO")
        else: 
            d = pow((X1-X2)**2+(Y1-Y2)**2, 0.5)
            if d+R2 > R1:
                print("MORTO")
            else:
                print("RICO")
    except EOFError:
        break
    
