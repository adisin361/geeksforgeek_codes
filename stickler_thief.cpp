#include <bits/stdc++.h>
using namespace std;
int higher(int a, int b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int sum1=0;
        int sum2=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                sum1+=a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i%2!=0)
                sum2+=a[i];
        }
        cout<<higher(sum1, sum2)<<endl;
    }
    return 0;
}