while True:
	n = int(raw_input())
	if n != -1:
		s = 0
		t = 0
		tn = 0
		for _ in xrange(n):
			lst = raw_input().split()
			t = tn
			tn = int(lst[1])
			s += int(lst[0]) * (tn - t)
		print '%d miles' %(s)
	else:
		break