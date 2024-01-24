#!/usr/bin/python3
"""This code shall calc island perim"""


def island_perimeter(grid):
    """This shall instantnize the calc method"""
    perimeter = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1
    for i in enumerate(grid):
        for j in enumerate(i[1]):
            if j[1] == 1:
                if i[0] == 0 or grid[i[0] - 1][j[0]] == 0:
                    perimeter += 1
                if i[0] == length or grid[i[0] + 1][j[0]] == 0:
                    perimeter += 1
                if j[0] == 0 or grid[i[0]][j[0] - 1] == 0:
                    perimeter += 1
                if j[0] == width or grid[i[0]][j[0] + 1] == 0:
                    perimeter += 1
    return perimeter
