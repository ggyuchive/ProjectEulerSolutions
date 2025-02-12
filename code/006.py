# Author: Byeonggyu Park
# Created on 2025/02/07 23:53
# Answer: 25164150
SumSquare, SquareSum = 0, 0
Q = 100
for i in range(1, Q+1):
    SumSquare += i*i
    SquareSum += i
SquareSum *= SquareSum
print(SquareSum-SumSquare)