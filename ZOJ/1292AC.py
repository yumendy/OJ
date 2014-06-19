import sys

t = int(sys.stdin.readline())

for _ in xrange(t):
	 b = sys.stdin.readline()
	 Sum = 0
	 while True:
	 	num = int(sys.stdin.readline())
	 	if num != 0:
	 		Sum += num
	 	else:
	 		break
	 print Sum
	 if _ != t - 1:
	 	print ''