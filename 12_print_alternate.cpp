#include <iostream>
using namespace std;

void print(int ar[], int n)
{
    int i;
    // code here
    while (i <= n - 1)
    {
        printf("%d ", ar[i]);
        i = i + 2;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[100001] = {0};
        int n;
        cin>>n;
        for(int i = 0;i < n; i ++)
            cin>>ar[i];
            print(ar,n);
            cout<<endl;
    }
}