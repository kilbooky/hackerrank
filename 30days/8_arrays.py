
import sys


n = int(input().strip())
arr = [int(i) for i in input().strip().split(' ')]

for i in arr[::-1]: #shallow copy of arr, counting from the end
    print("{} ".format(i), end='')