''' submission ready '''
# get number of entries, create a phonebook (dictionary) object
n = int(input())
phonebook = {}

# populate dictionary
while (n):
    k, v = input().split(' ')
    phonebook[k] = v
    n = n-1
    
# lookup
for i in range(len(phonebook)):
    entry = input()
    if entry not in phonebook.keys():
        print('Not found')
    else:
        print("{}={}".format(entry, phonebook[entry]))
    