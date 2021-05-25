'''
One programming language has the following keywords that cannot be used as identifiers:

break, case, continue, default, defer, else, for, func, goto, if, map, range, return, struct, type, var

Write a program to find if the given word is a keyword or not
'''
keywords=["break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"]
a=input()
if a in keywords:
    print(f'{a} is a keyword')
else:
    print(f'{a} is not a keyword')
