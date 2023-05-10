#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string tempstr = "";
    for(auto& c : my_string)
    {
        if('0'<= c && c <= '9')
        {
            tempstr = c;
            answer += stoi(tempstr);
        }
    }
    return answer;
}