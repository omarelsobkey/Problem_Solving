// https://codeforces.com/contest/1303/problem/C

#include <iostream>
#include <memory.h>

using namespace std;

int freq[26];

int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
            memset(freq,0,sizeof(freq));
        cin>>s;
        int n=s.size();
        string k;
        int j=-1;
        bool f=0;
        for(int i=0;i<n;i++){
            if(freq[s[i]-'a']==0){
                    if(j==0){
                        k=s[i]+k;
                    }
                    else{

                    if(j==k.size()-1){
                         j++;
                         k+=s[i];
                    }
                    else {f=1; break;}

                    }
            }
            else{
               if(j+1<k.size()&&s[i]==k[j+1]) j++;
            else if(j-1>=0&&s[i]==k[j-1]) j--;
            else {f=1; break;}
            }
            freq[s[i]-'a']++;
        }
        if(!f){
            cout<<"YES\n";
            cout<<k;
            for(int i=0;i<26;i++){
                if(freq[i]==0) cout<<(char)(i+'a');
            }
            cout<<endl;
        }
        else cout<<"NO\n";
    }
    return 0;
}