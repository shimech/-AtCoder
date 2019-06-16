def main():
    W, H, x, y = map(int, input().split())
    print('{} {}'.format(W * H * 0.5, '1' if x == W * 0.5 and y == H * 0.5 else '0'))
    return


if __name__ == '__main__':
    main()
