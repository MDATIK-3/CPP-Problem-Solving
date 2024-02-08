#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void MUKU()
{
    char s;
    cin >> s;
    double sum = 0, arv = 0, arr[12][12];
    double count = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {

            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {

            sum += arr[i][j];
            count++;
        }
    }
    if (s == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    if (s == 'M')
        cout << fixed << setprecision(1) << sum / count << endl;
}

int main()
{

    MUKU();

    return 0;
}
