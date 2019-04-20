def main():
    # 1行目の整数の入力
    a = int(input())
    # 2行目の整数（2個）の入力
    b, c = map(int, input().split())
    # 3行目の文字列の入力
    s = input()
    # 和の計算
    sum = a + b + c
    # 結果の出力
    print('{sum} {text}'.format(sum=sum, text=s))


if __name__ == '__main__':
    main()
