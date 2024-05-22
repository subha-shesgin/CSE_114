
#include <iostream>
#include<stack>
#include<list>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string str;
    stack<char>st1;
    cout<<"Enter the string"<<endl;
    cin>>str;

    for(int i=str.size();i>=0;i--)
    {
        //cout<<str[i]<<'\n';
        //st1.push(str[i]);
        if(!st1.empty() && (st1.top()== str[i]))
        {
            st1.pop();

        }
        else{
            st1.push(str[i]);
        }
    }
    
    if(st1.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        while(!st1.empty())
    {
        cout<<st1.top()<<" ";
        st1.pop();
    }
    }
    


}