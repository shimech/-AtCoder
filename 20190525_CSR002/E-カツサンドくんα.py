def main():
    N = int(input())
    total = 0
    for _ in range(N):
        A, B = map(int, input().split())
        total += min(A // 2, B)
    print(total)


if __name__ == '__main__':
    main()
