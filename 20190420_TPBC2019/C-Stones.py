def main():
    N = int(input())
    S = input()
    left_black = 0
    right_white = S.count('.')
    min_change = left_black + right_white
    for s in S:
        if s == '#':
            left_black += 1
        else:
            right_white -= 1
        min_change = min(min_change, left_black + right_white)
    print(min_change)


if __name__ == '__main__':
    main()
