#include <bits/stdc++.h>

#define ll long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

///////////////////////////////////////////////////////
//                                                   //
//  Nickname: Atik                                   //
//  University: Green University of Bangladesh       //
//  Country: Bangladesh                              //
//  City: Narayanganj                                //
//  CodeForces: codeforces.com/profile/md.atik       //
//                                                   //
//  Language: C++                                    //
//  Compiler: gnu g++                                //
//  Editor: VS Code                                  //
//                                                   //
///////////////////////////////////////////////////////

/*int Vowel(string str)
{
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
}

ll DIV(ll a, ll b)
{
    return (a + b - 1) / b;
}*/
const int MOD = 1e9 + 7;

ll factorial(int n)
{
    ll res = 1;
    for (int i = 2; i <= n; ++i)
    {
        res = (res * i) % MOD;
    }
    return res;
}

class Solution {
public:
    int commonFactors(int a, int b) {
        int n = min(a,b);
        int count =0;
        for(int i=1; i<=n; i++){
            if(a%i ==0 && b%i ==0)count++;
        }
        return count;

    }
};







vector<ll> computePrefixSum(const vector<ll> &nums)
{
    int n = nums.size();
    vector<ll> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
    }

    return prefixSum;
}

void MUKU()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<ll> prefixSum = computePrefixSum(arr);
    bool flag = true;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = ((i - 1) + i) / 2;
        if (prefixSum[i] < sum + 1)
        {
            flag = false;
            break;
        }
    }
    (flag) ? yes : no;
}
#define V 5
int weight = 0;

int minkey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;
    for (int i = 0; i < V; i++)
    {
        if (!mstSet[i] && key[i] < min)
        {
            min = key[i], min_index = i;
        }
    }
    return min_index;
}

void printMST(int parent[], int graph[V][V])
{
    cout << "Edgr \tWeight\n";
    for (int i = 1; i < V; i++)
    {
        cout << parent[i] << " - " << i << " \t"
             << graph[i][parent[i]] << " \n";
        weight += graph[i][parent[i]];
    }
    cout << "Total weight is : " << weight << endl;
}

void primsMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        mstSet[V] = false;
    }
    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minkey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printMST(parent, graph);
}

int main()
{
    fastio();
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};
    primsMST(graph);

    return 0;
}
