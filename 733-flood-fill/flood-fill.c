/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

void dfs(int** image, int imageSize, int* imageColSize,
         int sr, int sc, int color, int oldColor) {

    if (sr < 0 || sc < 0 || sr >= imageSize ||
        sc >= imageColSize[0] || image[sr][sc] != oldColor)
        return;

    image[sr][sc] = color;

    dfs(image, imageSize, imageColSize, sr-1, sc, color, oldColor);
    dfs(image, imageSize, imageColSize, sr+1, sc, color, oldColor);
    dfs(image, imageSize, imageColSize, sr, sc-1, color, oldColor);
    dfs(image, imageSize, imageColSize, sr, sc+1, color, oldColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize,
                int sr, int sc, int color, int* returnSize,
                int** returnColumnSizes) {

    *returnSize = imageSize;
    *returnColumnSizes = imageColSize;

    int oldColor = image[sr][sc];

    if (oldColor != color)
        dfs(image, imageSize, imageColSize, sr, sc, color, oldColor);

    return image;
}
