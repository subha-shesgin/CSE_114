#include<iostream>
#include<list>
#include<bits/stdc++.h>
#include<sstream>
using namespace std;
 int main()
 {
    list<string>doc1 ={"Data","is","the","new","oil","of","the","digital","economy"};
    list<string>doc2 = {"Data","is","a","new","oil"};

    doc1.sort();
    doc1.merge(doc2);
    doc1.sort();
    doc1.unique();
    doc1.size();

    cout<<"size"<<doc1.size();

    list<string>doc3 ={"Data","is","the","new","oil","of","the","digital","economy"};
    list<string>doc4 = {"Data","is","a","new","oil"};

   /* doc3.sort();
    doc4.sort();
    doc3.unique(doc4);
    for(string letter:doc3)
    {
        cout<<letter<<",";
    }*/
    int count =0;
    for(string word1:doc3)
    {
        for(string word2:doc4)
        {
            if(word1==word2)
            {
                count++;
            }
        }
    }
    cout<<"\nsize is"<<count;
    cout<<"\ndoc1,doc2 :"<<(float)count/(float)doc1.size();
    
    


 }