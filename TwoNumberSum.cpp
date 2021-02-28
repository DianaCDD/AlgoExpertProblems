#include <vector>
#include <unordered_set>
using namespace std;

//O(n) time | O(n) space
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
	vector<int> rez{};
	unordered_set<int> set{};
	for (int i = 0; i < static_cast<int>(array.size()); i++) {
		if (set.find(array[i]) == set.end())
			set.insert(targetSum - array[i]);
		else {
			rez.push_back(targetSum - array[i]);
			rez.push_back(array[i]);
			return rez;
		}
	}
  return {};
}
