#include<iostream>
#include<stack>
#include<string>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<char>q1;
    string s1;
    stack<char> stk1,stk2;

    cout<<"Enter a string : "<<endl;
    cin>>s1;
    cout<<"The entered string is : "<<s1<<endl;

    for(char ch : s1)
    {
        if(stk1.empty() || ch != stk1.top())
        {
            stk1.push(ch);
        }
        else{
            stk1.pop();
        }

    }
    //printing the skt1 
    /*while(!stk1.empty())
    {
        cout<<stk1.top()<<" ";
        stk1.pop();
    }*/

    //copying in second stack
    while(!stk1.empty())
    {
        stk2.push(stk1.top());
        stk1.pop();
    }
    //copying in queue
    while(!stk2.empty())
    {
        q1.push(stk2.top());
        stk2.pop();
    }
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    return 0;

}
