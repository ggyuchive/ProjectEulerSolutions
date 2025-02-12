# Author: Byeonggyu Park
# Created on 2025/02/09 00:16
# Answer: 137846528820
ans = 1
for i in range(21, 41):
    ans *= i
for i in range(1, 21):
    ans /= i
print(int(ans))