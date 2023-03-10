#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack {
   private:
    int top;
    int a[MAX];

   public:
    Stack() { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow";
        return false;
    }
    a[++top] = x;
    cout << x << " pushed into stack\n";
    return true;
}

int Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    return a[top--];
}

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    struct Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " popped from stack\n";
    return 0;
}
