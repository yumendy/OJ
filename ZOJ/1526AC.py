from math import log
num = int(raw_input())

for x in xrange(num):
	n = int(raw_input())
	out = 1
	for i in xrange(1,n + 1):
		out += log(i,10)
	print int(out)