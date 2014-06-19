import sys
for line in sys.stdin:
	if line != '0 0 0':
		able = []
		lst = raw_input().split()
		if ((float(lst[0]) <= 4.5) and (float(lst[1]) >= 150) and (float(lst[2]) >= 200)) == True:
			able.append('Wide Receiver')
		elif ((float(lst[0]) <= 6.0) and (float(lst[1]) >= 300) and (float(lst[2]) >= 500)) == True:
			able.append('Lineman')
		elif ((float(lst[0]) <= 5.0) and (float(lst[1]) >= 200) and (float(lst[2]) >= 300)) == True:
			able.append('Quarterback')
		if len(able) == 0:
			print 'No positions'
		else:
			print ' '.join(able)
	else:
		break