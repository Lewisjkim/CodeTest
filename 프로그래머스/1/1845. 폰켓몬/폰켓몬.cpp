#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;

	unordered_map<int, int> map;
	for (size_t i = 0; i < nums.size(); i++)
	{
		if (map.end() == map.find(nums[i]))
		{
			map.insert({nums[i], 1});
		}
		else
			map[nums[i]]++;
	}
	answer = min(map.size(), nums.size() / 2);

	return answer;
}