#!/usr/bin/python3
# -*- coding:utf8 -*-

import os
import re

url = "https://leetcode.com/problems/"
git_url = "https://github.com/zhangzuizui/leetcode_with_cpp/tree/master/array/"
path = os.getcwd()
read_file_name = path + "/array/" + "tmp.md"
readf = open(read_file_name, encoding="utf8")
lines = readf.readlines()
write_file_name = path + "/array/" + "TIPS.md"
writef = open(write_file_name, 'w', encoding='utf8')

L = []
cpps = os.walk(path + "/array")
for one, two, files in cpps:
    L = files

for l in lines:
    writef.write('\n')
    findder = re.search("(.*)\(\)(.*)", l)
    if findder is None:
        writef.write(l)
        continue
    testNo = re.search("([0-9]*)\.", findder.group(1)).group(1)
    testName = ''
    for l in L:
        lNo = re.search("([0-9]*)_", l).group(1)
        if testNo == lNo:
            testName = l
            break
    testName = testName.replace("(", "\\(")
    testName = testName.replace(")", "\\)")
    testName = testName.replace("_", "\_")
    s = re.search("\. ([0-9a-zA-Z \'\-\_\(\)]+?)\]", findder.group(1)).group(1)
    s = s.replace(" - ", '-')
    s = s.replace(')-', '')
    s = s.replace(' ', '-')
    s = s.replace("'", '')
    s = s.replace("(", '')
    s = s.replace(")", '')
    s = s.lower()
    s = '(' + url + s + ')    '
    l = findder.group(1) + s + '　' + findder.group(2) + "　[[我的题解](" + git_url + testName + ')]'
    writef.write(l)

readf.close()
