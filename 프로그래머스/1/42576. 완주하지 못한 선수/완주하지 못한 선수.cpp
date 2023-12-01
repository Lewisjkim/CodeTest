#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	
	unordered_map<string, int> map;
	for (auto player : participant)
	{
		unordered_map<string, int>::iterator iter = map.begin();
		unordered_map<string, int>::iterator iterend = map.end();
		if (map.end() == map.find(player))
			map.insert(make_pair(player, 1));
		else
			map[player]++;
	}
	for (auto finisher : completion)
	{
		map[finisher]--;
	}
	for (auto player : participant)
	{
		if (map[player] > 0)
		{
			answer = player;
			break;
		}
	}
	return answer;
}