#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sum = 0;
    for(int i = 1; i<=n; i++)
    {
        sum = 0;
        for(int j = i; j<=n; j++)
        {
            sum +=j;
            if(sum == n)
            {
                answer++;
                sum = 0;
                break;
            }
            if(sum>n)
            {
                sum = 0;
                break;
            }
                
        }
    }
    return answer;
}