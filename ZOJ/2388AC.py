n = int(raw_input())
for _ in xrange(n):
	lst = raw_input().split()
	b = int(lst[0]) - int(lst[1])
	if (b < 0) or (b % 2 != 0) :
		print 'impossible'
	else:
		print '%d %d' %(int(lst[0]) - 0.5 * b,0.5 * b)
