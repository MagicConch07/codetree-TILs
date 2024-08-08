#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int min = 99999999999;
    int input = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int num = 0;
        cin >> num;

        if(min > (num - input))
        {
            min = (num - input);
        }

        input = num;
    }

    cout << min;

    return 0;
}