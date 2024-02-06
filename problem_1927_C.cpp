#include <iostream>
#include <set>

void MUKU()
{
    int n, m, k;
    std::cin >> n >> m >> k;
    int arr[n], brr[m];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < m; ++i)
    {
        std::cin >> brr[i];
    }
    std::set<int> a(arr, arr + n);
    std::set<int> b(brr, brr + m);
    int p = k / 2;
    int count1 = 0, count2 = 0;
    int x = 0;
    int crr[p], drr[p];
    for (int val : a)
    {
        if (val <= k)
        {
            crr[x] = val;
            count1++;
            x++;
        }
        if (count1 >= p)
            break;
    }
    x = 0;
    for (int val : b)
    {
        if (val <= k && val != crr[x])
        {
            count2++;
        }
        if (count2 >= p)
            break;
        x++;
    }
    int prr[4] = {0};
    for (int i = 1; i <= k; ++i)
    {
        int q = a.find(i) != a.end();
        q += 2 * (b.find(i) != b.end());
        prr[q] += 1;
    }
    if (!prr[0] && prr[1] <= k / 2)
    {
        if (prr[2] <= k / 2)
        {
            std::cout << "YES" << std::endl;
        }
        else
    {
        std::cout << "NO" << std::endl;
    }
    }

    else
    {
        std::cout << "NO" << std::endl;
    }
}

int main()
{
    int t;
    std::cin >> t;
    while (t-- > 0)
    {
        MUKU();
    }
    return 0;
}
