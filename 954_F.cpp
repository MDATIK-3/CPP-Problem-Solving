#include <iostream>
#include <vector>

using namespace std;

void muku()
{

    int size;
    cin >> size;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int result = 0;
    for (int i = 1; i < size; i++)
    {
        for (int j = i + 1; j <= size; j++)
        {
            if ((array[i - 1] * array[j - 1]) % (i * j) == 0)
            {
                result++;
            }
        }
    }
    cout << result << endl;
}

int main()
{
    int num_tests;
    cin >> num_tests;
    while (num_tests--)
        muku(); 
    return 0;
}
