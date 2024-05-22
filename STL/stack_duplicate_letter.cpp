#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    stack<char> stk;
    string s1;
    string s2;
    cout << "Enter a string :" << endl;
    cin >> s1;
    cout << "s1 = " << s1 << endl;

    for (char ch : s1)
    {
        if (stk.empty() || ch != stk.top())
        {
            stk.push(ch);
        }
        else
        {
            stk.pop();
        }
    }
    if (stk.empty())
    {
        cout << "Empty stack !" << endl;
    }
    else
    {
        while (!stk.empty())
        {
            s2 = stk.top() + s2;
            stk.pop();
        }
        cout << "The string : " << s2 << endl;
    }
}