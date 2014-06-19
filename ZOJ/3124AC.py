import sys
for line in sys.stdin:
    if line[-1:] == '\n':
        print line[:-1]
    else:
        print line
