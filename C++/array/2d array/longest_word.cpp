#include <iostream>
using namespace std;

int main()
{
    int current = 0, max = 0;
    char x[100];
    cout << "Enter the line" << endl;
    cin.getline(x, 100);
    int i = 0;
    while (1)
    {

        if (x[i] == ' ' || x[i] == '\0')
        {

            if (current > max)
                max = current;
            current = 0;
        }
        else
        {
            current++;
        }

        
        if (x[i] == '\0')
        {
            cout << max;
            break;
        }

        i++;
    }

    return 0;
}