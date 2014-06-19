num = int(raw_input())
for i in xrange(num):
	lst = raw_input().split()
	if lst[1] == 'g':
		result = float(lst[0]) * 3.7854
		out = str(i + 1) + ' ' + format(result,'.4f') + ' l'
	elif lst[1] == 'kg':
		result = float(lst[0]) * 2.2046
		out = str(i + 1) + ' ' + format(result,'.4f') + ' lb'
	elif lst[1] == 'l':
		result = float(lst[0]) * 0.2642
		out = str(i + 1) + ' ' + format(result,'.4f') + ' g'
	elif lst[1] == 'lb':
		result = float(lst[0]) * 0.4536
		out = str(i + 1) + ' ' + format(result,'.4f') + ' kg'
	print out