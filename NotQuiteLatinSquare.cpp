#include <bits/stdc++.h>
using namespace std;

char replacedCharacter(char latinSquare[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int freq[3] = {0};
        for (int j = 0; j < 3; j++)
        {
            if (latinSquare[i][j] != '?')
                freq[latinSquare[i][j] - 'A'] = 1;
        }
        for (int k = 0; k < 3; k++)
        {
            if (freq[k] == 0)
                return 'A' + k;
        }
    }
    return '#';
}

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        char latinSquare[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> latinSquare[i][j];
            }
        }

        cout << replacedCharacter(latinSquare) << endl;
    }
    return 0;
}