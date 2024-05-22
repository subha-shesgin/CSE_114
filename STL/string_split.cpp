//this code shows how to seperate each word from a string
#include<iostream>
#include<list>
#include<bits/stdc++.h>
#include<sstream>

using namespace std;
int main()
{

    string S = "Dept of CSE CU";
    stringstream ss(S);
    string eachword;
    list<string>split;
    while(ss>>eachword){  //we can use anything and not necessarily "eachword"
        split.push_back(eachword);

    }
    cout<<endl<<"Each word: ";
    for(string letter:split){
        cout<<letter<<",";
    }

}
