def isgood(n,a,b):
	a = str(a)
	b = str(b)
	for i in str(n):
		if i != a and i != b:
			return False
	return True

lst = raw_input().split()
a = int(lst[0])
b = int(lst[1])
n = int(lst[2])
Sum = 0
x = 10 ** (n - 1)
while x < 10 ** n:
	x = x + 1
	t = x
	if isgood(t,a,b):
		temp = 0
		while t > 0:
			temp += t % 10
			t = t // 10
		if isgood(temp,a,b):
			Sum += 1
print Sum % 1000000007