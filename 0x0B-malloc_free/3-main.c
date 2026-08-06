/* 3-main.c */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void show_grid(int **g, int w, int h)
{
int r, c;
for (r = 0; r < h; ++r)
{
for (c = 0; c < w; ++c)
printf("%d ", g[r][c]);
printf("\n");
}
}

void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}

int main(void)
{
int **grid = alloc_grid(4, 3);
if (!grid) return 1;
show_grid(grid, 4, 3);
grid[1][2] = 42;
printf("\n");
show_grid(grid, 4, 3);
/* Note: free in task 4 */
free_grid(grid, 3);
return 0;
}
