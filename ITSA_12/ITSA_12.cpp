#include <iostream>
using namespace std;

int f(int(x))
{

    if (x == 0 || x == 1) {

        return x + 1;
    }

    else if (x > 1) {
        return f(x - 1) + f(x / 2);
    }

}
int main()
{
    int x;
    cin >> x;
    cout << f(x) << endl;
}

