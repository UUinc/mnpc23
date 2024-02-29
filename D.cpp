#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int step=0;
    while(n>0)
    {
        if(k>=n)
            n-=k;
        else
            n--;

        step++;
    }

    if(step%2==0)
        cout<<"Abdelghafour\n";
    else
        cout<<"Khalil\n";

    return 0;
}