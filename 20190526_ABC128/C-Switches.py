from functools import partial
from itertools import product
import numpy as np


def main():
    N, M = map(int, input().split())
    k = []
    s = []
    for _ in range(M):
        input_list = list(map(int, input().split()))
        k.append(input_list[0])
        s.append(input_list[1:])
    ps = list(map(int, input().split()))
    candidates = np.array(list(product([0, 1], repeat=N)))
    for i in range(M):
        index = s[i]
        p = ps[i]
        candidates = list(map(partial(is_match, index=index, p=p), candidates))
        candidates = [c for c in candidates if not isinstance(c, type(None))]
        if candidates == None:
            candidates = []
            break
    print(len(candidates))


def is_match(candidate, index, p):
    if sum(candidate[np.array(index) - 1]) % 2 == p:
        return candidate


if __name__ == '__main__':
    main()
