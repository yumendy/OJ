blocks = int(raw_input())

for j in xrange(blocks):

    b = raw_input()

    num = int(raw_input())
    for i in xrange(num):
        s = raw_input()
        lst = s.split()
        ls = []
        for item in lst:
            ls.append(item[::-1])
        print ' '.join(ls)
        if (i == num - 1) and (j != blocks - 1):
            print ''