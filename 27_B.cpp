#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>> &graph, int start, int n)
{
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : graph[u])
        {
            if (!visited[v])
            {
                cout << start + 1 << " " << v + 1 << endl;
                return;
            }
        }
    }
}

#include <string>
#include <cctype>

class Solution
{
public:
    bool isValid(std::string word)
    {
        bool has_vowel = false;
        bool has_consonant = false;
        bool digit = false;
        bool upper = false;
        bool lower = false;

        if (word.length() < 3)
        {
            return false;
        }

        for (char c : word)
        {
            if (isalpha(c))
            {
                if (isupper(c))
                {
                    upper = true;
                }
                if (islower(c))
                {
                    lower = true;
                }
                if (is_vowel(c))
                {
                    has_vowel = true;
                }
                if (is_consonant(c))
                {
                    has_consonant = true;
                }
            }
            if (isdigit(c))
            {
                digit = true;
            }
            if (c == '@' || c == '#' || c == '$')
            {
               return false;
            }
        }
        return has_vowel && has_consonant && (digit || lower || upper);
    }

private:
    bool is_vowel(char c)
    {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    bool is_consonant(char c)
    {
        c = tolower(c);
        return c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';
    }
};

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> graph(n);

    int k = n * (n - 1) / 2;
    for (int i = 0; i < k - 1; ++i)
    {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 0; i < n; ++i)
    {
        if (graph[i].size() < n - 1)
        {
            bfs(graph, i, n);
            break;
        }
    }

    return 0;
}
