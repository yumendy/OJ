# -*- coding: utf-8 -*-
"""
Created on Mon Nov 25 14:42:51 2013

@author: Administrator
"""
lst = []
while True:
    tem = raw_input()
    if tem == '999':
        break
    else:
        lst.append(tem)
for i in range(len(lst)-1):
    out = float(lst[i+1]) - float(lst[i])
    print format(out,'.2f')
print 'End of Output'
