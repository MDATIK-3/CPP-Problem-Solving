#include <iostream>
#include <vector>
#include <algorithm>

// Function to find subsets using backtracking
void findSubsetsUtil(const std::vector<int>& S, int target_sum, int start, int current_sum, std::vector<int>& path, std::vector<std::vector<int>>& result) {
    if (current_sum == target_sum) {
        result.push_back(path);
        return;
    }
    if (current_sum > target_sum) {
        return;  // Early termination since the sum exceeded the target
    }
    
    for (int i = start; i < S.size(); ++i) {
        path.push_back(S[i]);
        findSubsetsUtil(S, target_sum, i + 1, current_sum + S[i], path, result);
        path.pop_back();  // Backtrack and remove S[i] from the current subset
    }
}

// Function to find all subsets that sum to target_sum
std::vector<std::vector<int>> findSubsets(const std::vector<int>& S, int target_sum) {
    std::vector<std::vector<int>> result;
    std::vector<int> path;
    std::vector<int> sorted_S = S;
    std::sort(sorted_S.begin(), sorted_S.end());  // Sort the set for early termination
    findSubsetsUtil(sorted_S, target_sum, 0, 0, path, result);
    return result;
}

int main() {
    std::vector<int> S = {1, 2, 3, 5, 6, 7, 8, 9, 10, 15, 17};
    int target_sum = 26;

    std::vector<std::vector<int>> subsets = findSubsets(S, target_sum);

    std::cout << "Subsets whose sum equals " << target_sum << ": " << std::endl;
    for (const auto& subset : subsets) {
        std::cout << "{ ";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << "}" << std::endl;
    }

    return 0;
}
