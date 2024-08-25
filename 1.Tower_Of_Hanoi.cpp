#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
  // Base Case:
  if (n == 0)
    return;
  TowerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
  cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod
       << endl;

  TowerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
int main() {

  cout << "Hello World" << endl;
  int n = 3;
  TowerOfHanoi(n, 'A', 'C', 'B');

  return 0;
}