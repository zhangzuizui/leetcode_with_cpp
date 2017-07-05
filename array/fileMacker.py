#!/usr/bin/python3
# -*- coding:utf8 -*-

import os
import re

url = "https://leetcode.com/problems/"
path = os.getcwd()
read_file_name = path + "/array/" + "tmp.md"
write_file_name = path + "/array/" + "TIPS.md"
readf = open(read_file_name, encoding="utf8")
writef = open(write_file_name, 'w', encoding='utf8')
write_buff = []
lines = readf.readlines()

for l in lines:
    if l == '\n':
        write_buff.append('\n')
        continue
    findder = re.search("(.*)\(\)(.*)", l)
    if findder is None:
        write_buff.append(l)
        continue
    s = re.search("\. ([0-9a-zA-Z \'\-\_\(\)]+?)\]", findder.group(1)).group(1)
    s = s.replace(" - ", '-')
    s = s.replace(' ', '-')
    s = s.replace("'", '')
    s = s.lower()
    s = '(' + url + s + ')    '
    l = findder.group(1) + s + findder.group(2)
    write_buff.append(l)

readf.close()
writef.writelines(write_buff)
writef.close()
