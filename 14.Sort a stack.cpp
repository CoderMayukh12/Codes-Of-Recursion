#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element into a sorted stack
void insertSorted(stack<int>& st, int element) {
    // Base case: If stack is empty or top of stack is smaller than element
    if (st.empty() || element > st.top()) {
        st.push(element);
        return;
    }
    
    // If the element is smaller, remove the top element and insert recursively
    int temp = st.top();
    st.pop();
    insertSorted(st, element);
    
    // Push the top element back after inserting the element
    st.push(temp);
}

// Function to sort the stack using recursion
void sortStack(stack<int>& st) {
    // Base case: If the stack is empty
    if (st.empty()) {
        return;
    }
    
    // Remove the top element
    int temp = st.top();
    st.pop();
    
    // Recursively sort the remaining stack
    sortStack(st);
    
    // Insert the removed element back into the sorted stack
    insertSorted(st, temp);
}

// Function to print the elements of the stack
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(5);
    
    cout << "Original stack: ";
    printStack(st);
    
    // Sort the stack using recursion
    sortStack(st);
    
    cout << "Sorted stack: ";
    printStack(st);
    
    return 0;
}
