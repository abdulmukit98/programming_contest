#include <bits/stdc++.h>
using namespace std;
int main() 
{    
    int t;
    cin>>t;
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    
    while(t--)
    {
        string s;
        cin>>s;
        int count = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(find(vowel, vowel+5, s[i]) != vowel+5)
            {
                count++;
                if(count>=3) break;
            }   
            else count=0;   
        }
        
        if(count>=3) cout<<"Happy\n";
        else cout<<"Sad\n"; 
    }

    return 0;
}
