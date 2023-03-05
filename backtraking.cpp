#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> solution_space;

void backtrack(vector<int>& candidates, vector<int>& current_solution, int target, int start) {
    if (target == 0) {
        solution_space.push_back(current_solution);
        return;
    }
    for (int i = start; i < candidates.size() && candidates[i] <= target; i++) {
        current_solution.push_back(candidates[i]);
        backtrack(candidates, current_solution, target - candidates[i], i);
        current_solution.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<int> current_solution;
    backtrack(candidates, current_solution, target, 0);
    return solution_space;
}

int main() {
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> solutions = combinationSum(candidates, target);
    for (auto solution : solutions) {
        for (auto num : solution) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
