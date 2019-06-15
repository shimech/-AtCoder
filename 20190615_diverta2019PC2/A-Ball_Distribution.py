def main():
    N, K = map(int, input().split())
    print(N - K + 1 - 1 if K != 1 else 0)
    return


if __name__ == '__main__':
    main()
