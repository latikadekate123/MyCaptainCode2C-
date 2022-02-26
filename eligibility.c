#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"\n Enter your Age:";
    cin>>age;
    
    if(age >= 18)
        cout<<"\n Eligible Candidate";
    else
        cout<<"\n Not an eligible candidate";
    return 0;
}
