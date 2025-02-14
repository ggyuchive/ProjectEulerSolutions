# Author: Byeonggyu Park
# Created on 2025/02/14 21:16
# Answer: 2783915460
from itertools import permutations
cnt = 1000000
arr = [i for i in range(10)]
perm = permutations(arr, 10)
for i in list(perm)[cnt-1]:
    print(i, end="")