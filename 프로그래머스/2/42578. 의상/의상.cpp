#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
   	int answer{1};
	unordered_map<string, int> style;
	for (auto type : clothes)
	{
		style[type[1]]++;
	}

	for (auto a : style)
	{
		answer *= a.second+1;
	}

	return answer - 1;
}