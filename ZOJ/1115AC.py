def root(num):
	Sum = 0
	for i in str(num):
		Sum += int(i)
	return Sum

while True:
	num = raw_input()
	if num == '0':
		break
	else:
		if len(num) == 1:
			print num
		else:
			while True:
				num = root(num)
				if len(str(num)) == 1:
					break
			print num