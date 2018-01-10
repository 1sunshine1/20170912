void quick_sort(int *num, int left, int right) {
    while (right - left >= 1) {
    int x, y, z;
    x = left; y = right; z = num[left];
    while (x < y) {
        while (x < y && num[y] >= z) --y;
        if (x < y) num[x++] = num[y];
        while (x < y && num[x] <= z) ++x;
        if (x < y) num[y--] = num[x];
        }
    num[x] = z;
    quick_sort(num, x + 1, right);
    right = x - 1;
    }
    return;
}
