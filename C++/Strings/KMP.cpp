
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
         string t ,p;
         cin>>t>>p;

        int plen = p.length();
        int tlen = t.length();
        int t_i = 0;
        int p_j = 0;
        int extra[plen];

        int length = 0;

        extra[0] = 0;
        int index = 1;
        while (index < plen)
        {
            if (p[index] == p[length])
            {
                length++;
                extra[index] = length;
                index++;
            }
            else
            {

                if (length != 0)
                {
                    length = extra[length - 1];
                }
                else
                {
                    extra[index] = 0;
                    index++;
                }
            }
        }


        while (t_i < tlen)
        {
            if (p[p_j] == t[t_i])
            {
                p_j++;
                t_i++;
            }

            if (p_j == plen)
            {
                cout << t_i - p_j << endl;
                p_j = extra[p_j - 1];
            }

            else if (t_i < tlen && p[p_j] != t[t_i])
            {

                if (p_j != 0)
                    p_j = extra[p_j - 1];
                else
                    t_i = t_i + 1;
            }
        }
    }
    return 0;
}

