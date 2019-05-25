def main():
    N = int(input())
    sum_val = []
    for _ in range(N):
        A, B = map(int, input().split())
        sum_val.append(A + B)
    print(max(sum_val))


if __name__ == '__main__':
    main()
