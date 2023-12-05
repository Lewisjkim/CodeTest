#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    unordered_map<string,int> map;
    for (auto num : phone_book)
{
	map[num]++;
}
for (size_t i = 0; i < phone_book.size(); i++)
{
	string number{};
	for (size_t j = 0; j < phone_book[i].size(); j++)
	{
		number += phone_book[i][j];
		if (map[number] && number != phone_book[i])
		{
			return false;
		}
	}
}
return answer;
    
    return answer;
}