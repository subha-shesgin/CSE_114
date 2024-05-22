#include<iostream>
#include<string>
using namespace std;
int main()
{
    string bin1,bin2;
    int n1, n2;
    int f01=0,f10=0,f00=0,f11=0;

    cout<<"ENTER THE FIRST BINARY STRING"<<endl;
    cin>>bin1;
    
    cout<<"ENTER THE SECOND BINARY STRING"<<endl;
    cin>>bin2;

    n1= bin1.size();
    n2 = bin2.size();

    for(int i=0,j=0; i<n1 && j<n2;i++,j++)
    {
        if(bin1[i]== '0'&& bin2[j]=='1')
        {
            f01++;
        }
        if(bin1[i]=='1'&& bin2[j]=='0')
        {
            f10++;
        }
        if(bin1[i]=='0' && bin2[j]=='0')
        {
            f00++;
        }
        if(bin1[i]=='1' && bin2[j]=='1')
        {
            f11++;
        }
        
    }
    float SMC =(float) (f11+f00)/(f01+f10+f00+f11);
        cout<<"SMC = "<<SMC<<endl;


}