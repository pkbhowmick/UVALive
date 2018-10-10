#include <bits/stdc++.h>
#define pb push_back
#define sc1(n) scanf("%lld",&n)
#define sc2(a,b) scanf("%lld%lld",&a,&b)
#define sc3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define MX 100000
using namespace std;

typedef long long int ll;
typedef unsigned long long ul;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
ll arr[30];
int main()
{
    string str;

    while(1)
    {

        getline(cin,str);
        if(str=="-1")
            break;

        memset(arr,0,sizeof arr);
        ll len=str.size();
        for(ll i=0;i<len;i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                arr[str[i]-'a']++;
            }
            else if(str[i]>='A'&&str[i]<='Z')
            {
                str[i]=tolower(str[i]);
                arr[str[i]-'a']++;
            }
        }

        stringstream ss(str);
        string word;
        ll ans=0;
        while(ss>>word)
        {
            if(word[0]>='a'&&word[0]<='z')
                ans++;
        }
        printf("%lld",ans);
        for(ll i=0;i<26;i++)
            printf(" %lld",arr[i]);
        printf("\n");
    }
    return 0;
}
