#include <iostream>

using namespace std;

float coefficient(float, float);
int main()
{
    float n = 0, k = 0;
    cout << "please enter 2 integer numbers n, represent for (1+x)^n, and k, for the coefficient of x^k" << endl;

    cin >> n >> k;

    while(n > 0 || k > 0)
    {
        float sum = coefficient(n, k);
        cout << "the coefficient of x^" << k << "  in (1+x)^" << n << "  is  " << sum << endl;
        cout << "if you need to try another data, you can enter n and k again. if don't, enter '0 0' to quit" << endl;
        cin >> n >> k;
    }

    return 0;
}

float coefficient(float n, float k)
{
    if(n == k || k == 0)
        return 1;
    else if (k == 1)
        return n;
    else
        return n / k * coefficient(n-1,k-1);
}
