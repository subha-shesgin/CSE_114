#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;


    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << "\nThe size of v is: "
        <<v.size()
        <<"\nThe capacity of v is: "
        <<v.capacity()
        <<'\n';

        /*for(int num :v)
        {
            cout <<num<<",";
        }*/
        cout <<"Content of v is : \n";
        vector<int>::const_iterator it;

        for(it = v.begin(); it !=v.end(); it++ )
        {
            cout << *it << '\n';
        }

        return 0;
    }
