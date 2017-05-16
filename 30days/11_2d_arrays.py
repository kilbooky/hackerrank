#!/bin/python3

import sys

# (provided by hackerrank -- get input into 2x2 array)
arr = []
for arr_i in range(6):
    arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
    arr.append(arr_t)

# now, sum values of each hourglass
#!/bin/python3

import sys

# (provided -- get input into 2x2 array)
arr = []
for arr_i in range(6):
    arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
    arr.append(arr_t)

# now, sum values of each hourglass

for i in range(len(arr)):
    for j in range(len(arr[i])):
        # make sure we're not indexing out of range (ie, i <= 3, j <= 3)
        if (j > len(arr) - 3) or (i > len(arr) - 3):
            break
            
        # get values in hourglass pattern
        tot = arr[i][j] + arr[i][j+1] + arr[i][j+2] + \
            arr[i+1][j+1] + \
            arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
        
        # unless its the first pass, watermark (account for negative numbers)
        if (i == 0) and (j == 0):
            highest = tot
            
        if tot > highest:
            highest = tot
            
print (highest)for i in range(len(arr)):
print (highest)for i in range(len(arr)):
    for j in range(len(arr[i])):
        # make sure we're not indexing out of range (ie, i <= 3, j <= 3)
        if (j > len(arr) - 3) or (i > len(arr) - 3):
            break
            
        # get values in hourglass pattern
        tot = arr[i][j] + arr[i][j+1] + arr[i][j+2] + \
            arr[i+1][j+1] + \
            arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]
        
        # unless its the first pass, watermark (account for negative numbers)
        if (i == 0) and (j == 0):
            highest = tot
            
        if tot > highest:
            highest = tot
            
print (highest)