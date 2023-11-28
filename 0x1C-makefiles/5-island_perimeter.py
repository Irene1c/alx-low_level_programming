#!/usr/bin/python3
""" island perimeter """


def island_perimeter(grid):
    """  returns the perimeter of the island described in grid"""

    c = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0 or j == 0:
                    c += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    c += 1
                if grid[i - 1][j] == 0 or i == 0:
                    c += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    c += 1
    return c
