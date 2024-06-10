/*Marks to SGPA Converter*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sgpa,credit=0,credit_earned=0;
    int n;
    cout<<"Enter Number of Subject:"<<endl;
    cin>>n;
    int a[n],b[n];
    cout<<"Enter Corresponding Credit and Marks obtained:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter credit for subject " <<(i+1)<<":"<<endl;
        cin>>a[i];
        cout<<"Enter marks obtained in subject "<<(i+1)<<":"<<endl;
        cin>>b[i];
    }
    for(int i=0; i<n; i++)
    {
        credit+=a[i];
        credit_earned+=((b[i]/10)+1)*a[i];
    }
    //cout<<credit_earned<<endl;
    //cout<<credit<<endl;
    sgpa=(credit_earned*10)/(credit*10);
    cout<<"Your SGPA: "<<sgpa<<endl;
    return 0;
}