#include <iostream>
#include <string>
#include <stack>
using namespace std;

void balance(int k, string s)
{
    // stack<char> st;
    char a[10000];
    int j = -1;
    int i = 0;
    while (i < k)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            // st.push(s[i]);
            j++;
            a[j] = s[i];
            i++;
            continue;
        }
        else
        {
            switch (s[i])
            {
            case ']':
                if (a[j] == '[')
                {
                    // st.pop();
                    j--;
                    i++;
                    continue;
                }
                else
                {
                    cout << "NO";
                    return;
                }
            case ')':
                if (a[j] == '(')
                {
                    // st.pop();
                    j--;
                    i++;
                    continue;
                }
                else
                {
                    cout << "NO";
                    return;
                }

            case '}':
                if (a[j] == '{')
                {
                    // st.pop();
                    j--;
                    i++;
                    continue;
                }
                else
                {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    if (j == -1)
    {
        cout << "YES";
        return;
    }
    else
    {
        cout << "NO";
        return;
    }
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string s;
        cin >> s;
        int i = 0;
        int k = s.length();
        balance(k, s);
    }
    return 1;
}