#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    //s-2
    //r-0
    //p-5
    for(auto& r : rsp)
    {
        if(r == '2')
            answer += '0';
        else if(r == '0')
            answer += '5';
        else if(r == '5')
            answer += '2';
    }
    return answer;
}