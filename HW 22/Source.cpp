#include <iostream>
using namespace std;


void func(int* p_n, int st)
{
    if (st == 0)
    {
        *p_n = 1;
        return;
    }

    int n_initial_value = *p_n;

    for (int i = 0; i < st - 1; i++)
    {
        n_initial_value *= *p_n;
    }

    *p_n = n_initial_value;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
      int  m[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int  n   = 10;
    int* p   = m;

    int t;

    for (int i = 0; i < n / 2; i++)
    {
        t = *p;
        *p = *(p + 1);
        *(p + 1) = t;

        p += 2;
    }

    for (int i = 0; i < n  ; i++)
    {
        cout << m[i] << " ";
    }
    

    //int n = 10;


    func(&n, 3);


    cout << "Число 10 в степени 3: \n" << n;
}
