from re import findall


def main():
    N = int(input())
    num_full = 0
    begin_b = 0
    end_a = 0
    both = 0
    for i in range(N):
        s_i = input()
        num_full += len(findall('AB', s_i))
        if s_i[0] == 'B' and s_i[-1] == 'A':
            both += 1
        if s_i[0] == 'B':
            begin_b += 1
        if s_i[-1] == 'A':
            end_a += 1
    ans = num_full
    if begin_b == end_a:
        if begin_b == both:
            ans += max(begin_b - 1, 0)
        else:
            ans += begin_b
    else:
        ans += min(begin_b, end_a)
    print(ans)


if __name__ == '__main__':
    main()
