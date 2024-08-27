#include <bits/stdc++.h>
using namespace std;

void solve(string op, string ip)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    string op1 = op;
    op1.push_back(toupper(ip[0]));
    string op2 = op;
    op2.push_back(tolower(ip[0]));
    ip.erase(ip.begin() + 0); // Remove the first character from ip
    solve(op1, ip);           // Recursive call with uppercase
    solve(op2, ip);           // Recursive call with lowercase
    return;
}

int main()
{
    string ip;
    cin >> ip;
    string op = "";
    solve(op, ip); // Call solve with the correct order of arguments

    return 0;
}
