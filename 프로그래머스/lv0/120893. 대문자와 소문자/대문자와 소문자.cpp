#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto& str : my_string)
    {
        if(97<=str&&str<=122)
            answer += toupper(str);
        else if(65<=str && str<=90)
            answer += tolower(str);
    }
    return answer;
}