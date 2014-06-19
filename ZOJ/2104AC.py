while True:
	num = int(raw_input())
	if num != 0:
		dic = {}
		for i in xrange(num):
			word = raw_input()
			if word in dic:
				dic[word] += 1
			else:
				dic[word] = 1
		lst = dic.items()
		lst.sort(key = lambda x : x[1] , reverse = True)
		print lst[0][0]
	else:
		break