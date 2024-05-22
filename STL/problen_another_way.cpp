#include<iostream>
#include<list>
#include<bits/stdc++.h>
#include<sstream>
#include<algorithm>
#include<iterator>
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
    doc3.sort();
    doc4.sort();
    list<string>common_list;

    set_intersection(
        doc3.begin(), doc3.end(),
        doc4.begin() ,doc4.end(),
        back_inserter(common_list)
    );
    for(string letter:common_list)
    {
        cout<<letter<<",";
    }
    common_list.sort();
    common_list.size();
    cout<<"\nsize"<<common_list.size();
    cout<<"\ndoc1,doc2 :"<<(float)common_list.size()/(float)doc1.size();
    
 }
