#include <iostream>

using namespace std;
void Solution(int n){
    int min = 1000; int max = 0;
    int tmp;
        for(int i = 0; i < n; i++)
        {
            cin >> tmp; /*n�� ��ŭ ���̸� �Է��� �޴´�. */
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
    /*�ԷµǴ� ������ ���� N, ���̸� ���� ���� ���� ��� Min, ���� ���� ���� ��� Max
    */
    cin >> N;
    Solution(N);

    return 0;
}
