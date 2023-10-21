#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int temp = 0;
    for(size_t i = 0; i<arr.size(); i++)
    {
        if(arr[i] >= 50 && arr[i] % 2 == 0)
        {
            temp = arr[i] / 2;
            answer.push_back(temp);
        }
        else if(arr[i] < 50 && arr[i] % 2 == 1)
        {
            temp = arr[i] * 2;
            answer.push_back(temp);
        }
        else
            answer.push_back(arr[i]);
    }
    return answer;
}