#include <iostream>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    /*set<int, greater<int>> myset = {1, 2, 3, 2, 2, 21, 233, 211, 30};
    myset.insert(0);
    for (int x : myset)
    {
        cout << x << " ";
    }
    cout << endl;*/
    vector<int> vec;
    /*  vector<int>::iterator it;
      for (int i = 0; i < 6; i++)
          vec.push_back(i + 1);
      cout << "Normal way:\n";
      for (int i = 0; i < vec.size(); i++)
          cout << vec.at(i) << endl;
      cout << "Const way\n";
      for (int &i : vec)
          cout << i << endl;
      cout << "VECTOR ITERATOR'S\n";
      for (it = vec.begin(); it != vec.end(); it++)
          cout << *it << endl;

      cout << "Vector capacity: " << vec.capacity();*/
    cout << "Enter the size: ";
    int num;
    cin >> num;
    int num2;
    vector<int> vec2;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cout << "Enter the size: ";

    cin >> num2;

    for (int i = 0; i < num2; i++)
    {
        int x;
        cin >> x;
        vec2.push_back(x);
    }
    vector<int> vec3;
    vec3.reserve(vec.size() + vec2.size());
    vec3.insert(vec3.end(), vec.begin(), vec.end());
    vec3.insert(vec3.end(), vec2.begin(), vec2.end());

    sort(vec3.begin(), vec3.end());

    for (int i = 0; i < num + num2; i++)
        cout << vec3[i]<<" ";
}