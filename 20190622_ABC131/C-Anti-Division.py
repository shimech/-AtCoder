from fractions import gcd


def main():
    A, B, C, D = map(int, input().split())
    Q_AC, R_AC = A // C, A % C
    Q_AD, R_AD = A // D, A % D
    Q_BC, R_BC = B // C, B % C
    Q_BD, R_BD = B // D, B % D
    Q_ACD, R_ACD = A // lcm(C, D), A % lcm(C, D)
    Q_BCD, R_BCD = B // lcm(C, D), B % lcm(C, D)
    N_C = num_baisu(Q_AC, Q_BC, R_AC, R_BC)
    N_D = num_baisu(Q_AD, Q_BD, R_AD, R_BD)
    N_CD = num_baisu(Q_ACD, Q_BCD, R_ACD, R_BCD)
    print(B - A + 1 - (N_C + N_D - N_CD))
    return


def lcm(x, y):
    return (x * y) // gcd(x, y)


def num_baisu(Q_A, Q_B, R_A, R_B):
    if R_A == 0 and R_B == 0:
        return Q_B - Q_A + 1
    elif R_A == 0 and R_B != 0:
        return Q_B - Q_A + 1
    elif R_A != 0 and R_B == 0:
        return Q_B - (Q_A + 1) + 1
    else:
        return Q_B - (Q_A + 1) + 1


if __name__ == "__main__":
    main()
