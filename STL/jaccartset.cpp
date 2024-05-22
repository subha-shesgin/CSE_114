#include <iostream>
#include <set>
#include<bits/stdc++.h>
#include<sstream>
#include<algorithm>
#include<iterator>
using namespace std;
 int main()
 {
    set<string>doc1 ={"Data","is","the","new","oil","of","the","digital","economy"};
    set<string>doc2 = {"Data","is","a","new","oil"};


    doc1.merge(doc2);
    /*
    set<string>doc3 ={"Data","is","the","new","oil","of","the","digital","economy"};
    set<string>doc4 = {"Data","is","a","new","oil"};
    set<string>un;
    set_union(
        doc3.begin(), doc3.end(),
        doc4.begin() ,doc4.end(),
        inserter(un,un.begin())
    );
    //method of merge :set1.insert(set2)
    
    
    
    
    
    
    */
    doc1.size();

    cout<<"size"<<doc1.size();

    set<string>doc3 ={"Data","is","the","new","oil","of","the","digital","economy"};
    set<string>doc4 = {"Data","is","a","new","oil"};
    set<string>common_words;

    set_intersection(
        doc3.begin(), doc3.end(),
        doc4.begin() ,doc4.end(),
        inserter(common_words,common_words.begin())
    );
    for(string letter:common_words)
    {
        cout<<letter<<",";
    }

    common_words.size();
    cout<<"\nsize"<<common_words.size();
    cout<<"\ndoc1,doc2 :"<<(float)common_words.size()/(float)doc1.size();
    
 }
