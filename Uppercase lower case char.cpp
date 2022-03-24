#include<iostream>
using namespace std;

int main()
{
    char x;
    cout<<"Enter any character:";
    cin>>x;

    if('A'<=x && x<='Z')
        cout<<x<<" is an uppercase character\n";

    else if('a'<=x && x<='z')
        cout<<x<<" is an lowercase character\n";

    else
        cout<<x<<" is not a alphabetical character\n";
    return 0;

}
