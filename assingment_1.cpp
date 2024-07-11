#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findSubsetsUtil(const std::vector<int> &S, int target_sum, int start, int current_sum, std::vector<int> &path, std::vector<std::vector<int>> &result)
{
    if (current_sum == target_sum)
    {
        result.push_back(path);
        return;
    }
    if (current_sum > target_sum)
    {
        return;
    }

    for (int i = start; i < S.size(); ++i)
    {
        path.push_back(S[i]);
        findSubsetsUtil(S, target_sum, i + 1, current_sum + S[i], path, result);
        path.pop_back();
    }
}
vector<vector<int>> findSubsets(const vector<int> &S, int target_sum)
{
    vector<vector<int>> result;
    vector<int> path;
    vector<int> sorted_S = S;
    sort(sorted_S.begin(), sorted_S.end());
    findSubsetsUtil(sorted_S, target_sum, 0, 0, path, result);
    return result;
}

int main()
{
    vector<int>
        S = {1, 2, 3, 5, 6, 7, 8, 9, 10, 15, 17};
    int target_sum = 26;

    vector<vector<int>> subsets = findSubsets(S, target_sum);

    cout << "Subsets whose sum equals " << target_sum << ": " << endl;
    for (const auto &subset : subsets)
    {
      cout << "{ ";
        for (int num : subset)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
