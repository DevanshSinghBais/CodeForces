#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int a[N],min,d=0;
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
        if(a[i]>=0)
        {
            if(!d||a[i]<min)
            {
                min=a[i];
                d++;
            }
        }
        else
        {
            if(!d||(-1)*a[i]<min)
            {
                min = (-1)*a[i];
            }
        }
    }
    cout<<min<<endl;
    return 0;
}