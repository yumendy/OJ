import sys
dic = {1:1,2:1}
def F(n):
    if n in dic:
        return dic[n]
    elif n - 1 in dic:
        dic[n] = dic[n-1] +dic[n-2]
        return dic[n]
    else:
        dic[n] = F(n-1) + F (n-2)
        return dic[n]

for line in sys.stdin:
	n = int(line) 
	times = n / 500
	for i in xrange(1,times+1):
	    F(i*500)
	print F(n)