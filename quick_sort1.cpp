void quick_sort(int *num, int left, int right) {
    if (left < right) return;
    int x, y, z;
    x = left; y = right; z = num[left];
    while (x < y) {
        while (x < y && num[y] >= z) --y;
        if (x < y) num[x++] = num[y];
        while (x < y && num[x] <= z) ++x;
        if (x < y) num[y--] = num[x];
    }
    num[x] = z;
    quick_sort(num, left, x - 1);
    quick_sort(num, x + 1, right);
}
