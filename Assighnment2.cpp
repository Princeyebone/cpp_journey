#include <iostream>

using namespace std;
class Number2;

class Number1 {
    int Num;

public:
    void  setNum(int num)
    {
        Num = num;
    }
    friend int big(Number1, Number2);
};

class Number2
{
    int Num;

public:
    void setNum(int num)
    {
        Num = num;
    }
    friend int big(Number1, Number2);
};

int big(Number1 f, Number2 s)
{
    if (f.Num < s.Num)
    {
        cout << s.Num << " is the bigger number" << endl;
    }
    else { cout << f.Num << " is the bigger number" << endl; }

}

int main()
{
    Number1 init;
    Number2 fina;
    init.setNum(15);
    fina.setNum(39);
    big(init, fina);
    return 0;
}