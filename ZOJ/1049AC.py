from math import pi
N = int(raw_input())
for _ in xrange(N):
	S = raw_input().split()
	a = float(S[0])
	b = float(S[1])
	year = (a*a + b*b)*pi / 100
	y = int(year + 1)
	print 'Property %d: This property will begin eroding in year %d.' %(_+1,y)
print 'END OF OUTPUT.'