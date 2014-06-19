import sys

for line in sys.stdin:
	num = float(line)
	if num != 0:
		Sum = 0
		i = 2
		while Sum < num:
			Sum += 1.0 / i
			i += 1
		print '%d card(s)' %(i - 2)