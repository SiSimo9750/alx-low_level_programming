#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):

    """Return an island perimetres.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of of 0 and 1 representing an island.
    Returns:
        The perimeter of the island.
    """
    w = len(grid[0])
    h = len(grid)
    edg = 0
    size = 0

    for idx in range(h):
        for jdx in range(w):
            if grid[idx][jdx] == 1:
                size += 1
                if (jdx > 0 and grid[idx][jdx - 1] == 1):
                    edg += 1
                if (idx > 0 and grid[idx - 1][jdx] == 1):
                    edg += 1
    return size * 4 - edg * 2
