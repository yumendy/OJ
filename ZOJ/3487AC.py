# -*- coding: utf-8 -*-
"""
Created on Mon Nov 25 20:07:37 2013

@author: Administrator
"""
num = int(raw_input())

for i in range(num):
    n = raw_input()
    if len(n) > 1:
        if n[-2] == '1':
            print n + 'th'
        elif n[-1] == '1':
            print n + 'st'
        elif n[-1] == '2':
            print n + 'nd'
        elif n[-1] == '3':
            print n + 'rd'
        else:
            print n + 'th'
    else:
        if n[-1] == '1':
            print n + 'st'
        elif n[-1] == '2':
            print n + 'nd'
        elif n[-1] == '3':
            print n + 'rd'
        else:
            print n + 'th'
        
            
