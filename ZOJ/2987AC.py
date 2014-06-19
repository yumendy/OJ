# -*- coding: utf-8 -*-
"""
Created on Mon Nov 25 21:15:42 2013

@author: Administrator
"""

num = int(raw_input())

for i in range(num):
    lst = raw_input().split()
    index = int(lst[0])-1
    print i+1,lst[1][:index]+lst[1][index+1:]