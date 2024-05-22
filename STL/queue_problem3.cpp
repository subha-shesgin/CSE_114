#include <iostream>
#include <string>
#include <queue>
using namespace std;
int main()
{
    queue<char>q1,q2;
    string s1, s2,s3,s4;

    cout << "Enter the 1st string :" << endl;
    cin >> s1;
    cout << "Enter the 2nd string :" << endl;
    cin >> s2;
    cout << "the 1st string :" << s1 << endl;
    cout << "the 2nd string :" << s2 << endl;

    for(char ch :s1)
    {
        if(ch!= '#')
        {
            q1.push(ch);
        
        }
         if(ch== '#')
        {
            q1.pop();
        
        }
    }
    for(char ch :s2)
    {
        if(ch!= '#')
        {
            stk2.push(ch);
        
        }
        if(ch== '#')
        {
            stk2.pop();
        
        }
    }
    if(stk1.empty())
    {
        cout<<"Empty 1 "<<endl;
    }
   
    if(stk2.empty())
    {
        cout<<"Empty 2 "<<endl;
    }
    
    if(stk1 == stk2)
    {
        cout<<"TRUE "<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
}