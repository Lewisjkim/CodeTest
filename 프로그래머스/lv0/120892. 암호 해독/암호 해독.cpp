#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    for(size_t i = code-1; i<cipher.size(); i+=code)
    {
        answer += cipher[i];
    }
    return answer;
}