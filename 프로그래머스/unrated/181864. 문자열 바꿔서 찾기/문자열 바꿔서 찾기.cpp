#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(auto& str : myString)
    {
        if(str == 'A')
            str = 'B';
        else if(str == 'B')
            str = 'A';
    }
    answer = myString.find(pat) != myString.npos ? 1 : 0;
    return answer;
}