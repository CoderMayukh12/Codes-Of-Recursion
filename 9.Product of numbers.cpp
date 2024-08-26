#include <bits/stdc++.h>
using namespace std;

int product(int x, int y) {
    // Ensure x is the smaller number for efficiency in the recursion
    if (x > y) {
        return product(y, x);
    }

    // Base Case: If x is 0, the product is 0
    if (x == 0) {
        return 0;
    }

    // Recursive Case: Add y to the product of (x-1) and y
    return y + product(x - 1, y);
}

int main() {
    int x, y;
    cin >> x >> y;

    cout << product(x, y) << endl;
    return 0;
}
