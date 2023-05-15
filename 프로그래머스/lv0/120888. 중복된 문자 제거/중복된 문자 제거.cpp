#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto& str : my_string)
    {
        if(answer.find(str) == std::string::npos)
            answer+= str;
    }
    return answer;
}