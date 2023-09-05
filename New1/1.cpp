#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,y,c;
    for(int i=0;i<t;i++)
    {
        cin>>y;
        c=y/100;
        if(c%10==1)
            cout<<"Case #"<<i<<": "<<c<<"st century!";
        if(c%10==2)
            cout<<"Case #"<<i<<": "<<c<<"nd century!";
        if(c%10==3)
            cout<<"Case #"<<i<<": "<<c<<"rd century!";
        else
            cout<<"Case #"<<i<<": "<<c<<"th century!";

    }
    return 0;
}
