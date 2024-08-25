#include <bits/stdc++.h>
using namespace std;

long long int MOD=1000000007;
long long power(int N,int R)
{
   if (R == 0) return 1;

// Recursive Case
long long halfPower = power(N, R / 2) % MOD;

// If R is even
if (R % 2 == 0) {
    return (halfPower * halfPower) % MOD;
}
// If R is odd

    return (N * halfPower % MOD * halfPower % MOD) % MOD;

}
int main() {

  cout << "Hello World" << endl;
  int N,R;
  cin >> N >> R;
  cout << power(N,R) << endl;
  return 0;
}