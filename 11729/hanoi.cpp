#include <iostream>
using namespace std;

namespace Answer
{
    void Hanoi(int n, int start, int to, int bypass)
    {
        if (n == 1)
            printf("%d %d\n", start, to);
        else
        {
            Hanoi(n - 1, start, bypass, to);
            printf("%d %d\n", start, to);
            Hanoi(n - 1, bypass, to, start);
        }
    }
}

namespace Mine
{
    void Hanoi(int n, int start, int to, int bypass)
    {
        if (n == 1)
        {
            printf("%d %d\n", start, to);
            return;
        }
        Hanoi(n - 1, start, bypass, to);
        printf("%d %d\n", start, to);
        Hanoi(n - 1, bypass, to, start);
    }
}

void Hanoi(int n, int start, int to, int bypass)
{
    if (n == 1)
    {
        printf("%d %d\n", start, to);
        return;
    }
    Hanoi(n - 1, start, bypass, to);
    printf("%d %d\n", start, to);
    Hanoi(n - 1, bypass, to, start);
}

int main() {
    int num;
    cin >> num;
    cout << (1 << num) - 1 << "\n"; // 2의 num제곱 표현법
    Hanoi(num, 1, 3, 2);
}