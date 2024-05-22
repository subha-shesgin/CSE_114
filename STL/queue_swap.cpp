#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> myqueue1;
    queue<int> myqueue2;

    // pushing elements into first stack
    myqueue1.push(1);
    myqueue1.push(1);
    myqueue1.push(1);
    myqueue1.push(1);

    // pushing elements into second stack
    myqueue2.push(3);
    myqueue2.push(5);
    myqueue2.push(7);
    myqueue2.push(9);
    // using elements of stack
    myqueue1.swap(myqueue2);

    // printing the first stack
    cout << "myqueue1 = ";
    while (!myqueue1.empty())
    {
        cout << myqueue1.front() << " ";
        myqueue1.pop();
    }
    cout << "mystack2=";
    while (!myqueue2.empty())
    {
        cout << myqueue2.front() << " ";
        myqueue2.pop();
    }
}
