import numpy as np


def main():
    N, M = map(int, input().split())
    A = np.array(list(map(int, input().split())))
    for _ in range(M):
        B, C = map(int, input().split())
        index = np.argsort(A)
        i = 0
        for _ in range(B):
            arg = index[i]
            if A[arg] < C:
                A[arg] = C
                i += 1
            else:
                break
    print(sum(A))


if __name__ == '__main__':
    main()
