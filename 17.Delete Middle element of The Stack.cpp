#include <iostream>
#include <stack>
using namespace std;

// Function to remove the middle element of a stack
void removeMiddle(stack<int>& stt, int k) {
    // Base case: if k is 1, pop the top element
    if (k == 1) {
        stt.pop();
        return;
    }
    // Store the top element and pop it
    int temp = stt.top();
    stt.pop();
    
    // Recursive call to remove the middle element
    removeMiddle(stt, k - 1);
    
    // Push the stored element back to the stack
    stt.push(temp);
    return;
}

// Function to handle removing the middle element
stack<int> RemovedMiddle(stack<int>& stt, int sz) {
    // If the stack is empty, return it
    if (stt.size() == 0) return stt;
    
    // Calculate the middle position
    int k = sz / 2 + 1;
    
    // Call the function to remove the middle element
    removeMiddle(stt, k);
    return stt;
}

int main() {
    // Define a stack
    stack<int> stt;
    
    // Push elements into the stack
    int i = 10;
    while (i--) {
        stt.push(10 - i);
    }
    
    // Remove the middle element from the stack
    RemovedMiddle(stt, stt.size());
    
    // Print the remaining stack elements
    while (!stt.empty()) {
        cout << stt.top() << endl;
        stt.pop();
    }
    return 0;
}
