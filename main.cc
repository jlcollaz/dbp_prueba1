#include <iostream>
using namespace std;

class quicksort {
private:
    string txt;

public:
    quicksort(){}
};

istream& operator >> (istream &i, const quicksort &q)
{
    i >> q.txt;
    i.ignore();
    return i;
}

ostream& operator >> (ostream &o, const quicksort &q)
{
    o << q.txt;
    return o;
}


int main()
{
    quicksort qs;
    qs();
    qs << "in.txt";
    qs >> "out.txt"; 
    return 0;
} Pareja A(50, 75 );
    Pareja B(150, 175 );
    Pareja C = A + B;
 
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << "\n";