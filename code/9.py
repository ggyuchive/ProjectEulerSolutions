# Author: Byeonggyu Park
# Created on 2025/02/08 23:59
# Answer: 31875000
for a in range(1001):
    for b in range(a+1, 1001):
        c = 1000 - a - b
        if c > b and a*a+b*b == c*c:
            print(a*b*c)