#include <iostream>
#include <string>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string longestPalin(string s)
    {
        int max = 0;
        int out = 0;
        int start = s.length();
        int end = 0;
        for (int i = 0; i < s.length(); i++)
        {

            for (int j = s.length() - 1; j >= 0; j--)
            {
                if (i > j)
                {
                    continue;
                }
                int k = j;
                int p = i;
                while (p <= k)
                {
                    if (s[p] == s[k])
                    {
                       
                        p++;
                        k--;
                    }
                    else
                    {
                        out = 1;
                        break;
                    }
                }
                // if(out == 1){
                //     out =0;
                //     continue;
                // }
                if (p > k)
                {
                    
                    string a = s.substr(i, j-i+1);
                    if (a.length() > max || ((a.length() == max) && (i <= start)))
                    {
                        

                        max = a.length();
                        start = i;
                        end = j-i + 1;
                        break;
                    }
                }
            }
        }
        return s.substr(start, end);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalin(S) << endl;
    }
}