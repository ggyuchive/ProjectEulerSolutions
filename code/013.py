# Author: Byeonggyu Park
# Created on 2025/02/09 00:07
# Answer: 5537376230
with open("./input/input_13.txt") as f:
    ans = 0
    for i in range(100):
        num = int(f.readline())
        ans += num
    print(str(ans)[:10])