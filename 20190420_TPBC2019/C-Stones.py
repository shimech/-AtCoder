def main():
    N = int(input())
    S = input()
    nums = []
    for b in range(N+1):
        nums.append(num_change(S, b, N))
    print(min(nums))


def num_change(S, border, N):
    count = 0
    for i in range(N):
        if i < border:
            if S[i] == '#':
                count += 1
        else:
            if S[i] == '.':
                count += 1
    return count


if __name__ == '__main__':
    main()
