def main():
    N, X = map(int, input().split())
    L = list(map(int, input().split()))
    for i in range(N+1):
        D = sum(L[:i])
        if D > X:
            print(i)
            return
    print(N+1)
    return


if __name__ == '__main__':
    main()
