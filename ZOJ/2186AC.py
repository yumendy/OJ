lst = raw_input().split()
s = False
for i in lst:
	if int(i) <= 168:
		print 'CRASH %s' %(i)
		s = True
		break
if s == False:
	print 'NO CRASH'