num = int(raw_input())

for _ in xrange(num):
	wrd = []
	word = raw_input()
	for letter in word:
		if ord(letter) == 90:
			wrd.append('A')
		else:
			wrd.append(chr(ord(letter) + 1))
	new_word = ''.join(wrd)
	print "String #%d" %(_ + 1)
	print new_word + '\n'