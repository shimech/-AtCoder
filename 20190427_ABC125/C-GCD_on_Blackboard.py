from fractions import gcd


def main():
    N = int(input())
    A = list(map(int, input().split()))
    left = [0] * N
    right = [0] * N
    for i in range(1, N):
        left[i] = gcd(left[i-1], A[i-1])
        right[-1-i] = gcd(right[-i], A[-i])
    gcds = []
    for i in range(N):
        gcds.append(gcd(left[i], right[i]))
    print(max(gcds))


if __name__ == '__main__':
    main()
