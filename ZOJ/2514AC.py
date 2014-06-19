while True:
	n = int(raw_input())
	if n != 0:
		change = 0
		out = []
		for _ in xrange(n):
			lst = raw_input().split()
			passwd = lst[1]
			if (('1' in passwd) or ('0' in passwd) or ('l' in passwd) or ('O' in passwd)) == True:
				change += 1
				passwd = passwd.replace('1','@')
				passwd = passwd.replace('0','%')
				passwd = passwd.replace('l','L')
				passwd = passwd.replace('O','o')
				Str = lst[0] + ' ' + passwd
				out.append(Str)
		if change == 0:
			print 'No account is modified.'
		else:
			print change
			for item in out:
				print item
	else:
		break