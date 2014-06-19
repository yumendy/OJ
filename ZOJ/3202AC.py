n = int(raw_input())

for i in xrange(n):
	raw_input()
	lst = raw_input().split()
	temp = []
	for i in lst:
		temp.append(int(i))
	temp.sort(reverse=True)
	out1 = lst.index(str(temp[0])) + 1
	out2 = str(temp[1])
	print out1,out2