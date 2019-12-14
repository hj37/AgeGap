#include <iostream>

using namespace std;
void Solution(int n){
    int min = 1000; int max = 0;
    int tmp;
        for(int i = 0; i < n; i++)
        {
            cin >> tmp; /*n개 만큼 나이를 입력을 받는다. */
            if(min > tmp)
            {
                min = tmp;
            }
            if(max < tmp)
            {
                max = tmp;
            }
        }
    cout << max-min ;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    /*입력되는 나이의 개수 N, 나이를 가장 적게 먹은 사람 Min, 가장 많이 먹은 사람 Max
    */
    cin >> N;
    Solution(N);

    return 0;
}
