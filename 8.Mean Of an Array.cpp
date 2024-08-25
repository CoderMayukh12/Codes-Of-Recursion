#include <iostream>
#include <vector>
using namespace std;

// Recursive function to calculate mean
double mean(int sz, int i, const vector<int>& arr, int sum) {
    if (i == sz) {
        return double(double(sum) / double(sz)); // Base case: calculate the mean
    }
    // Recursive case: add the current element to the sum and move to the next element
    return mean(sz, i + 1, arr, sum + arr[i]);
}

int main() {
    vector<int> arr(10, 0);
    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    cout << "Mean: " << mean(10, 0, arr, 0) << endl;
    return 0;
}
