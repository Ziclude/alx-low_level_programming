#!/usr/bin/python3
""" Define island perimeter measure."""


def island_perimeter(grid):
    """Return island perimeter of grid.
    Args:
        grid: list's list of integers representating island.
    Return:
        perimeter of island.
    """
    wth = len(grid[0])
    hth = len(grid)
    eds = 0
    size = 0

    for a in range(hth):
        for b in range(wth):
            if grid[a][b] == 1:
                size += 1
                if (b > 0 and grid[a][b - 1] == 1):
                    eds += 1
                if (a > 0 and grid[a - 1][b] == 1):
                    eds += 1
    return (size * 4 - eds * 2)
