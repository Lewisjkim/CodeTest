#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int jant = 5;
    int bant = 3;
    int iant = 1;
    answer += hp/jant;
    hp = hp%jant;
    answer += hp/bant;
    hp = hp%bant;
    answer += hp/iant;
        
    return answer;
}