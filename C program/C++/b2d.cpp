#include<bits/stdc++.h>
using namespace std;
int b2d(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        ans+=(n%10)*x;
        x*=2;
        n/=10;
    }
    return ans;
}
int o2d(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        ans+=(n%10)*x;
        x*=8;
        n/=10;
    }
    return ans;
}
int h2d(string s)
{
    int ans=0;
    int x=1;
    int n = s.size();
    for(int i=n-1;i>=0;i--)
        {
            if(s[i]>='1'&&s[i]<='9')
            {
                ans+=(s[i]-'0')*x;
            }
            else if(s[i]>='A'&&s[i]<='F')
            {
                ans+=(s[i]-'A'+10)*x;
            }
            x*=16;
        }
    return ans;
}
int d2b(int n)
{
    int ans=0;
    int x=1;
    while(n>=x)
    x*=2;
    x/=2;
    while(x>0)
    {
        int lastdig = n/x;
        n-=lastdig*x;
        x/=2;
        ans=ans*10+lastdig;
    }
    return ans;
}

int rev(int n)
{
    int rev=0;
    int rem=0;
    while(n>0)
    {
        rem=n%10;
        rev=10*rev + rem;
        n/=10;
    }
    return rev;
}
string d2h(int n)
{
    string ans="";
    int x=1;
    while(n>=x)
    x*=16;
    x/=16;
    while(x>0)
    {
        int lastdig=n/x;
        n-=lastdig*x;
        x/=16;
        if(lastdig<=9)
        {
            ans+=to_string(lastdig);
        }
        else
        {
            char c='A'+lastdig-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int binadd(int a, int b)
{
    int precarry=0;
    int res=0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans = ans*10 + precarry;
            precarry=0;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0))
        {
            if(precarry)
        }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<binadd(a,b)<<endl;
}