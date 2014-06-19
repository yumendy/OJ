n = int(raw_input())
for i in xrange(n):
	lst = raw_input().split()
	if int(lst[0]) < int(lst[1]):
		print 'NO BRAINS'
	else:
		print 'MMM BRAINS'