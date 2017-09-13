#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using std::cin;
using std::cout;
using std::endl;
using std::swap;

void quick_sort(int *num, int left, int right) {
    while (left < right) {
    int x, y, z;
    x = left; y = right; z = num[(left + right) >> 1];
    do{
        while (num[x] < z)++x;
        while (num[y] > z)--y;
        if (x <= y) {
        swap(num[x], num[y]);
        x++; y--;
      }
    }while(x <= y);
        quick_sort(num, left, y);
        left = x;
    }
    return;
}

int main() {
    int n;
    cin >> n;
    int *num = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", num + i);
    }
    quick_sort(num, 0, n - 1);
    printf("%d", num[0]);
    for (int i = 1; i < n; i++) {
        printf(" %d", num[i]);
    }
    return 0;
}
