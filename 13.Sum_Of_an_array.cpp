//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function to return sum of elements
    int sum(vector<int> &arr)
    {
        // code here
        if (arr.size() == 0)
            return 0;
        int x = arr[arr.size() - 1];
        arr.pop_back();
        return x + sum(arr);
    }
};

//{ Driver Code Starts.

int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num)
        {
            nums.push_back(num);
        }
        Solution ob;
        int ans = ob.sum(nums); // Pass the vector nums to the sum function
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends