def main():
    tcase = int(input())
    for i in range(1, tcase + 1):
        n, k = map(int,input().split())
        for r in range(1,n + 1):
            if(r == 1): pos = 1
            else: pos = ((pos + k - 1) % r) + 1
        print("Case " + str(i) + ": " + str(pos) + "\n")
    return 0
main()
