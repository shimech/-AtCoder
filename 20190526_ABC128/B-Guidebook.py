def main():
    N = int(input())
    restaurants = {}
    for i in range(N):
        S, P = input().split()
        P = int(P)
        if not S in restaurants.keys():
            restaurants[S] = []
        restaurants[S].append([i, P])
    for s in sorted(restaurants.keys()):
        Ps = sorted(restaurants[s], key=lambda x:x[1], reverse=True)
        for p in Ps:
            print(p[0]+1)


if __name__ == '__main__':
    main()
