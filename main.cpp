#include <iostream>

using namespace std;

int main()
{
    cout<<"Tree size: ";
    int a;
    cin >>a;
    for (int i=a; i>0;i--)
    {
    for (int b=0; b<i;b++)
    {
        cout<<" ";
    }
    for (int c=i; c<=a;c++)
    {
        cout<<"*";
    }
    for (int c=i+1; c<=a;c++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    for (int b=a; b>0;b--)
    {
        cout<<" ";
    }
    cout<<"*";
    return 0;
}
