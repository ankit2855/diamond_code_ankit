#include<bits/stdc++.h>
using namespace std;

int main()
{ char letter;
    cin>>letter;
    char start;
    if(!isalpha(letter))return 0;
    
    if(isupper(letter))
    {
    start='A';
    }
    else if(islower(letter))
    {
        start='a';
    }
    int space1=letter-start;
    int space2=letter-start;
    int k;
    for(char i=start;i<=letter;i++)
    {
        
        for(int j=1;j<=space1;j++)
        {
            
            cout<<" ";
        }
        space1--;
        
    
    cout<<" "<<i;
    if(i!=start)
    {
        for(k=space2;k<=letter-start;k++)
        {
            
            cout<<" ";
        }
        space2=space2-2;
        cout<<i;
    }
    cout<<"\n";
}

int space3=letter-start;
int space4=k-1;
int g=k*2-5;
for(char i=letter-1;i>=start;i--)
{
    
    for(int j=space3;j<=letter-start;j++)
    {
        cout<<" ";
    }
space3--;

cout<<" "<<i;

if(i!=start)
{
    for(int k=1;k<=g;k++)
    {
        cout<<" ";
        
    }
    g=g-2;
    cout<<i;
    
}
cout<<"\n";
    
}
    

    
    return 0;
}