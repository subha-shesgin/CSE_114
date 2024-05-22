#include <iostream>
#include <list>

using namespace std;

int main()
{
    //create a list
    list<string> numbers = {"a","b","c"};
    list<string> nums = {"d","e"};
    //display the original list
    cout <<"initial List: ";
     
    for (string number: numbers)
    {
        cout<<number<<",";
    }

        //add element at the biginning
        numbers.push_front("l");

        //add element at the end

        numbers.push_back("k");

        //display the modified list

        cout<<endl<<"Final list: ";

        for(string number:numbers){
            cout<<number<<",";

        }
        cout<<endl<<"Sorted list :";
        numbers.sort();
        for(string number:numbers){
            cout<<number<<",";
        }
        cout<<endl<<"Reverse list :";
        numbers.reverse();
        for(string number:numbers){
            cout<<number<<",";
        }
        cout<<endl<<"Unique list :";
        numbers.unique();
        for(string number:numbers){
            cout<<number<<",";
        }
        cout<<endl<<"Merged list :";
        numbers.merge(nums);
        for(string number:numbers){
            cout<<number<<",";
        }
    
}