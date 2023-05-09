#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    int even = 0;
    int odd = 0;
    for(auto& n : num_list)
    {
        if(n%2 == 0)
            even++;
        else if(n%2 ==1)
            odd++;
    }
    answer.push_back(even);
    answer.push_back(odd);
    return answer;
}