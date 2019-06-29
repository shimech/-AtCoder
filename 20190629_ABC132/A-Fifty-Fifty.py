def main():
    S = input()
    count = {}
    for s in S:
        if not s in count.keys():
            count[s] = 0
        count[s] += 1
    count_sorted = sorted(count.items(), key=lambda x:-x[1])
    if count_sorted[0][1] == 2 and count_sorted[1][1] == 2:
        print("Yes")
    else:
        print("No")
    return


if __name__ == "__main__":
    main()
