def main():
    n = int(input())
    p = list(map(int, input().split()))
    count = 0
    for i in range(1, n-1):
        p_sorted = sorted(p[i-1:i+2])
        if p[i] == p_sorted[1] and p[i] != p_sorted[0]:
            count += 1
    print(count)
    return


if __name__ == "__main__":
    main()
