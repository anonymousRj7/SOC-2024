#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    for(; t; t--)
    {
        string s;
        cin >> s;
        int dg = (s[0] - '0') * 10 + (s[1] - '0');
        int mm = (s[3] - '0') * 10 + (s[4] - '0');
        if(dg < 12)
        {
            if(dg == 0)
                cout << "12:";
            else
            {
                if(dg < 10)
                    cout << 0;
                cout << dg << ":";
            }
            if(mm < 10)
                cout << 0;
            cout << mm << " AM\n";
        }
        else
            if(dg == 12)
            {
                cout << dg << ":";
                if(mm < 10)
                    cout << 0;
                cout << mm << " PM\n";
            }
            else
            {
                if(dg-12 < 10)
                    cout << 0;
                cout << dg-12 << ":";
                if(mm < 10)
                    cout << 0;
                cout << mm << " PM\n";
            }
    }
    return 0;
}