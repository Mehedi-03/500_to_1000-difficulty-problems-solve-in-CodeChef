#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int a, b, c; 
        cin>>a>>b>>c; 
        double aveg = (a + b) / 2.0; 
        if(aveg > c)
        {
            cout<<"YES"<<endl; 
        }
        else
        {
            cout<<"NO"<<endl; 
        }

    }

}