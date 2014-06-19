# -*- coding: utf-8 -*-
"""
Created on Mon Nov 25 14:00:34 2013

@author: Administrator
"""
lst = []
while True:
    a = raw_input()
    if a == '-1':
        break
    else:
        lst.append(a)
for item in lst:
    ls = item.split()
    for i in range(len(ls)):
        ls[i] = int(ls[i])
    Sum = -1
    for i in ls:
        if 2 * i in ls:
            Sum += 1
    print Sum
    