#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;
    if(money == 5500)
    {
        answer.push_back(1);
        answer.push_back(0);
    }
    else if(money<5500)
    {
        answer.push_back(0);
        answer.push_back(money);
    }
    else if(money>5500)
    {
        answer.push_back(money/5500);
        answer.push_back(money - answer[0]*5500);
    }
        
        
    return answer;
}