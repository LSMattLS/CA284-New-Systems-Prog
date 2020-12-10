import sys


def checker(lst):
    for item in range(0, len(lst) - 1):
        if lst[item] > lst[item + 1]:
            return 1
    return 0


def bubble(lst):
    while checker(lst) == 1:
        for item in range(0, len(lst) - 1):
            if lst[item] > lst[item + 1]:

                tmp = lst[item]
                lst[item] = lst[item + 1]
                lst[item + 1] = tmp
    return lst

