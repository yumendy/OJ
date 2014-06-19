while True:
	n = int(raw_input())
	if n != 0:
		lst = []
		for _ in xrange(n):
			num = int(raw_input())
			lst.append(num)
		lst.sort()
		Sum = sum(lst) - lst[0] - lst[-1]
		result = Sum / (len(lst) - 2)
		print result
	else:
		break