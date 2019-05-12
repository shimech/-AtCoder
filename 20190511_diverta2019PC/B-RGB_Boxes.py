def main():
    R, G, B, N = map(int, input().split())
    n_r = int(N / R)
    n_g = int(N / G)
    count = 0
    for r in range(n_r+1):
        for g in range(n_g+1):
            b = (N - R * r - G * g) // B
            r_b = (N - R * r - G * g) % B
            if b >= 0 and r_b == 0:
                count += 1
    print(count)


if __name__ == '__main__':
    main()
