//this code shows how to swap two strings using stack
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> mystack;
    stack<int> mystack2;

    // pushing elements into first stack
    mystack.push(1);
    mystack.push(1);
    mystack.push(1);
    mystack.push(1);

    // pushing elements into second stack
    mystack2.push(3);
    mystack2.push(5);
    mystack2.push(7);
    mystack2.push(9);
    // using elements of stack
    mystack.swap(mystack2);

    // printing the first stack
    cout << "mystack=";
    while (!mystack.empty())
    {
        cout << mystack.top() << " ";
        mystack.pop();
    }
    cout << "mystack2=";
    while (!mystack2.empty())
    {
        cout << mystack2.top() << " ";
        mystack2.pop();
    }
}
