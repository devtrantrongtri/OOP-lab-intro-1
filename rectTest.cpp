#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
#include "rect.h"
using namespace std;
int main(void)
{
    Rectangle a;         // test rectangle -- default constructor
    Rectangle b(12, 20); // parameterized constructor
    Rectangle c(-5, 15); // invalid length
    cout << "Rectangle A = ";
    a.display();
    cout << endl;
    cout << "Rectangle B = ";
    b.display();
    cout << endl;
    cout << "Rectangle C = ";
    c.display();
    cout << endl<<endl;
    int newLen, newWid; // input vars for update

    cout << "Enter new length and width for rectangle A: ";
    cin >> newLen >> newWid;
    a.setLength(newLen);
    a.setWidth(newWid);
    cout << "New rectangle A: ";
    a.display();
    cout << endl;
    cout << "Perimeter = " << a.perimeter() << endl;
    cout << "Diagonal = " << a.diagonal() << endl;
    cout << "Area = " << a.area() << endl;
    cout << "Rectangle A is ";
    if (!a.isSquare())
        cout << "not ";
    cout << "a square." << endl
         << endl;
    cout << "Rectangle A:" << endl;
    a.draw('*');
    cout << endl;
    return 0;
}