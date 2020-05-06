def printesh(var):
    for i in range(len(var[1:])):
        print(var[0], end=' ')
        print(var[i+1], id(var[i]))

f = open('sample.txt', 'r')
lines = f.read().split('\n')
print('dtype var add\n')

for value in lines:
    import re
    j = re.split(' |;|,', value)
    j.remove('')
    printesh(j)