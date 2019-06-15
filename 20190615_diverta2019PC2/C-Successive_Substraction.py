def main():
    N = int(input())
    A = list(map(int, input().split()))
    A = sorted(A)
    A_M = sorted(A)
    A_M[0] *= -1
    start = 0
    if N == 2:
        print(max(A) - min(A))
        print('{} {}'.format(max(A), min(A)))
        return
    for i in range(1, N-1):
        if A_M[i] < 0:
            A_M[i] *= -1
            start = i
    M = sum(A_M)
    print(M)
    if start == 0:
        for i in range(1, N):
            if i < N-1:
                if i == 1:
                    x = A[0]
                    y = A[1]
                else:
                    x = tmp
                    y = A[i]
            else:
                x = A[-1]
                y = tmp
            tmp = x - y
            print('{} {}'.format(x, y))
    elif start == N - 2:
        for i in range(1, N):
            if i == 1:
                x = A[-1]
                y = A[start]
            else:
                x = tmp
                y = A[start-i+1]
            tmp = x - y
            print('{} {}'.format(x, y))
    else:
        for i in range(1, N):
            if i == 1:
                x = A[start]
                y = A[start+1]
            elif 1 < i < N - 1 - start:
                x = tmp
                y = A[start+i]
            elif i == N - 1 - start:
                x = A[-1]
                y = tmp
            else:
                x = tmp
                y = A[start-(i-(N-1-start))]
            tmp = x - y
            print('{} {}'.format(x, y))
    return


if __name__ == '__main__':
    main()
