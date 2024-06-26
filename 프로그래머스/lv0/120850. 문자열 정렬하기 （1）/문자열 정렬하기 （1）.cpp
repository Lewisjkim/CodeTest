#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    string temp;
    for(auto& str : my_string)
    {
        if(48<=str && str<=57)
        {
            temp = str;
            answer.push_back(stoi(temp));
        }
    }
    
    sort(answer.begin(),answer.end());
    return answer;
}