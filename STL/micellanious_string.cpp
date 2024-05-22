#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Dept. of CSE CU";
    //stringstream --> takes every  word 
    stringstream ss(s);
    string word;

    while(ss>>word)
    {
        cout<<word<<",";
    }
}

