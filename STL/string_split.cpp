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
    while(ss>>eachword){
        split.push_back(eachword);

    }
    cout<<endl<<"Each word: ";
    for(string letter:split){
        cout<<letter<<",";
    }

}