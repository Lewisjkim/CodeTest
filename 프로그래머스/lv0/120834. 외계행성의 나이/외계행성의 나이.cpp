#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s_age = to_string(age);
    for(auto& a : s_age)
    {
        if(a == '0')
            answer += 'a';
        else if(a == '1')
            answer += 'b';
        else if(a == '2')
            answer += 'c';
        else if(a == '3')
            answer += 'd';
        else if(a == '4')
            answer += 'e';
        else if(a == '5')
            answer += 'f';
        else if(a == '6')
            answer += 'g';
        else if(a == '7')
            answer += 'h';
        else if(a == '8')
            answer += 'i';
        else if(a == '9')
            answer += 'j';
    }
    return answer;
}