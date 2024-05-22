#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q1,q2;
    stack<string>stk;
    string s1;
    cout<<"Enter string :"<<endl;
    getline(cin,s1);
    cout<<" The given string is: "<<s1<<endl;

    stringstream ss(s1);
    string eachword;
    while(ss>>eachword)
    {
        q1.push(eachword);
    }    
    while(!q1.empty())
    {
        stk.push(q1.front());
        q1.pop();
    }
    while(!stk.empty())
    {
        q2.push(stk.top());
        stk.pop();
    }
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}
