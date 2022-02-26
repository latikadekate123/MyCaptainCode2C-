#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"\n Voting Eligibility\n";
    cout<<"\n Enter your Age:";
    cin>>age;
    
    if(age >= 18)
        cout<<"\n You are an Eligible Candidate";
    else
        cout<<"\n You are NOT an eligible candidate";
    return 0;
}
