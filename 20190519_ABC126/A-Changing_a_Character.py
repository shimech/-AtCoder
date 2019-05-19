def main():
    N, K = map(int, input().split())
    S = input()
    print(replace(S, K))


def replace(S, K):
    if S[K-1] == 'A':
        return S[:K-1] + 'a' + S[K:]
    elif S[K-1] == 'B':
        return S[:K-1] + 'b' + S[K:]
    else:
        return S[:K-1] + 'c' + S[K:]


if __name__ == '__main__':
    main()
