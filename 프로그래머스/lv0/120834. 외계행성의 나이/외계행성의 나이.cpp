#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string s_age = to_string(age);
    for(auto& a : s_age)
    {
        a += 49;
    }
    return answer = s_age;
}