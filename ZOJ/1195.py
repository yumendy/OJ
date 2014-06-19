# -*- coding: utf-8 -*-
"""
Created on Wed Dec 18 23:52:47 2013

@author: Administrator
"""
num = 0
while True:
    s = raw_input()
    if s != '0 0 0':
        d = []
        o = []
        now = []
        Max = 0
        result = True
        num += 1
        lst1 = s.split()
        n = int(lst1[0])
        m = int(lst1[1])
        c = int(lst1[2])
        for _ in range(n):
            a = int(raw_input())
            d.append(a)
        for _ in range(m):
            a = int(raw_input())
            o.append(a)
        for i in o:
            if i - 1 not in now:
                now.append(i - 1)
            else:
                now.remove(i - 1)
            Sum = 0
            for item in now:
                Sum += d[item]
                if Sum >= c:
                    result = False
                else:
                    if Sum > Max:
                        Max = Sum
            if result == False:
                break
        
        if result == False:
            print 'Sequence %d' %(num)
            print 'Fuse was blown.\n'
        else:
            print 'Sequence %d' %(num)
            print 'Fuse was not blown.'
            print 'Maximal power consumption was %d amperes.\n' %(Max)
    else:
        break