#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

string solution(string s) {
    string answer = "";
    string temp = "";
    istringstream iss(s);
    vector<int> num;
    
    while(getline(iss, temp,' '))
    {
        num.push_back(stoi(temp));
    }
    sort(num.begin(), num.end());
    
    answer += to_string(num.front()) + " " + answer += to_string(num.back());
    
    return answer;
}