num = int(raw_input())
for _ in xrange(num):
	inlst = []
	out = []
	s = raw_input()
	num = len(s)
	Sum = 1
	if num == 1:
		print s
	else:
		for i in xrange(num - 1):
			if s[i] == s[i + 1] :
				Sum += 1
			else:
				if Sum > 1:
					item = str(Sum) + s[i]
				else:
					item = s[i]
				out.append(item)
				Sum = 1
			if i == num - 2:
				if Sum > 1:
					out.append(str(Sum) + s[-1])
		if num > 1:
			if s[-1] != s[-2]:
				out.append(s[-1])
		print ''.join(out)