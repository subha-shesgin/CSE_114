#include<iostream>
#include<set>
using namespace std;

int main()
{
    //accending order 
    set<char> a;
    //for decending order : set<<har,greatter<char>>a;
    a.insert('G');
    a.insert('F');
    a.insert('G');

    for(char st:a){
        cout<<st<<"";
    }
    cout<<'\n';
    return 0;

}