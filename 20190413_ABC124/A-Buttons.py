NUM_PUSH = 2


def main():
    A, B = map(int, input().split())
    sum = 0
    for i in range(NUM_PUSH):
        if A >= B:
            push = A
            A -= 1
        else:
            push = B
            B -= 1
        sum += push
    print(sum)


if __name__ == "__main__":
    main()
