import numpy as np


def main():
    N = int(input())
    A = []
    B = []
    for _ in range(N):
        a, b = map(int, input().split())
        A.append(a)
        B.append(b)
    A = np.array(A)
    B = np.array(B)
    index = np.argsort(B)
    A_sorted = A[index]
    B_sorted = B[index]
    for i in range(N):
        sum_val = sum(A_sorted[:i+1])
        if sum_val > B_sorted[i]:
            print("No")
            return
    print("Yes")
    return


if __name__ == "__main__":
    main()
