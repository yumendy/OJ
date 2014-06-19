# -*- coding: utf-8 -*-
"""
Created on Mon Nov 25 19:19:40 2013

@author: Administrator
"""
c = int(raw_input())

for i in range(c):
    s = raw_input().split()
    lst = []
    for item in s:
        lst.append(int(item))
    num = float(lst.pop(0))
    average = sum(lst) / num
    above = 0
    for j in lst:
        if j > average:
            above += 1
    out = above / num *100
    print str(format(out,'.3f')) +'%'
    
    
    
