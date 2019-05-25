def main():
    N = int(input())
    sum_val = 0
    for _ in range(N):
        A, B = map(int, input().split())
        sum_val += max(A, B)
    print(sum_val)


if __name__ == '__main__':
    main()
