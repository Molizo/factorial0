#include <iostream>

using namespace std;

int number5Div(int n)
{
    int cnt=0;
    while(n%5==0)
    {
        cnt++;
        n=n/5;
    }
    return cnt;
}

int main()
{long long int p,cnt=0,out=0,pos=5;
    cin>>p;
    while(true)
    {
        int temp;
        temp=number5Div(pos);
        if(temp+cnt<p)
            cnt=cnt+temp;
        else if(temp+cnt>p)
            cout<<"-1";
        else
            break;
        pos=pos+5;
    }
    cout<<pos;
    return 0;
}
