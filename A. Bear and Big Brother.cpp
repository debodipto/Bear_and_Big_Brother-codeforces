#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,count=0;
    cin>>x>>y;
    if(x>y)
        count = 0;
    else
        while(x<=y)
    {
        x = x*3;
        y = y*2;
        count++;
    }

    cout<<count<<endl;
    return 0;
}
