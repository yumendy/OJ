def inter(n):
	return int(n)
n = int(raw_input())
for _ in xrange(n):
	s = raw_input()
	if s == 'Faster':
		raw_input()
		lst = raw_input().split()
		ls = map(inter,lst)
		ls.sort()
		print ls[0]
	else:
		raw_input()
		lst = raw_input().split()
		ls = map(inter,lst)
		ls.sort()
		print ls[-1]