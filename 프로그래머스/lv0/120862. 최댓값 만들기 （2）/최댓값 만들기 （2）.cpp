#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int size = numbers.size();
    sort(numbers.begin(),numbers.end());
    int a = numbers[0]*numbers[1];
    int b = numbers[size-1]*numbers[size-2];
    return answer = max(a,b);
}