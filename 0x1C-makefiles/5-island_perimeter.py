#!/usr/bin/python3
""" island perimeter """


def island_perimeter(grid):
    """  returns the perimeter of the island described in grid"""

    c = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            try:
                if grid[i][j] == 1:
                    if grid[i][j - 1] == 0:
                        c += 1
                    if grid[i][j + 1] == 0:
                        c += 1
                    if grid[i - 1][j] == 0:
                        c += 1
                    if grid[i + 1][j] == 0:
                        c += 1
            except IndexError:
                c += 1
    return c
