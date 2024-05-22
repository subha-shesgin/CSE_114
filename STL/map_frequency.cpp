#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include<sstream>
 using namespace std;
 int main()
 {
    
    string str;
    cout<<"Enter string"<<endl;
    getline(cin,str);
    map<string ,int>fr;

    stringstream ss(str);
    string eachword;
    while(ss>>eachword){
       
        if(fr.find(eachword) == fr.end())
        {
             fr.insert({eachword,1});
        } 
        else{
            fr[eachword]++;
        }
    }
    for(auto st:fr){
        cout<<st.first<<' '<<st.second<<endl;
    }

 }

