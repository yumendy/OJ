import sys
for n in sys.stdin:
	n = int(n)
	a = n / 100
	b = (n - 100 * a) / 10
	c = n % 10
	if a**3 + b**3 + c**3 == n:
		print "Yes"
	else:
		print "No"