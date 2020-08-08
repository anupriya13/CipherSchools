#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast()  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define f(i,s,n) for(i=s;i<n;i++)
#define pb push_back
#define mll map<long long,long long>
#define umll unordered_map<long long,long long>
#define pll pair<long long,long long>
#define vl vector<long long>
#define sl set<long long>
#define fi first
#define se second

ll i,j;
ll x =0;
void solve();
int main() {
     fast();
     ll t=1;
     cin>>t;
    while(t--)
    {
        solve();
    }
	return 0;
}

void solve()
{
    string s;
    if(x==0)
    cin.ignore(80, '\n');
    x++;
    getline(cin, s);
    stack<char>s1,s2,s3;

    ll n = s.length();

    ll flag = 0;

    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            s1.push(s[i]);
        }
        else if(s[i]=='[')
        {
            s2.push(s[i]);
        }
        else if(s[i]=='{')
        {
            s3.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!s1.empty())
            s1.pop();
            else
            {
                flag = 1;
                break;
            }
        }
        else if(s[i]==']')
        {
            if(!s2.empty())
            s2.pop();
            else
            {
                flag = 1;
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(!s3.empty())
            s3.pop();
            else
            {
                flag = 1;
                break;
            }
        }

    }

    if(!s1.empty()||!s2.empty()||!s3.empty())
    flag = 1;

    if(flag==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
