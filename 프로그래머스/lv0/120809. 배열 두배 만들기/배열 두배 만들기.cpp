#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(auto& n : numbers)
    {
        n = n*2;
    }
    return answer =numbers;
}