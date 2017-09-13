#include <iostream>
using std::cin;
using std::cout;
int main() {
    int n;
    cin >> n;
    int f[4] = {1, 0, 0, 0};
     for (int i = 1; i <= n; i++) {
        f[i % 4] = f[(i + 2) % 4] + f[(i + 1) % 4];
    }
    cout << f[n % 4];
    return 0;
}
