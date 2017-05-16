''' day 6: arrays '''
n = int(input())

for j in range(n): 
    strod =""
    streven=""
    l1 = list(input())
    for i in range(len(l1)):
        if i%2==0:
            strseven +=l1[i]
        else:
            strod +=l1[i]
    print(streven,strod)
