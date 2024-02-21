#!/usr/bin/python3
"""This defines island perimeter measuring function."""


def island_perimeter(grid):
    """Return perimiter of an island.

    The grid represents land by 1 and water by 0.

    Args:
        grid (list): List of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for k in range(height):
        for m in range(width):
            if grid[k][m] == 1:
                size += 1
                if (m > 0 and grid[k][m - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][m] == 1):
                    edges += 1
    return size * 4 - edges * 2
