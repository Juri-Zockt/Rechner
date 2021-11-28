#include <iostream>
using namespace std;

class Calculator
{
    public:
        double plus(double x, double y)
        {
            return x + y;
        }
        double minus(double x, double y)
        {
            return x - y;
        }
        double multi(double x, double y)
        {
            return x * y;
        }
        double div(double x, double y)
        {
            return x / y;
        }
};

void Menu()
{
    cout << "*****MENU*****" << endl;
    cout << "1. Addieren" << endl;
    cout << "2. Subtrahieren" << endl;
    cout << "3. Multiplizieren" << endl;
    cout << "4. Dividieren" << endl;
    cout << "5. Exit" << endl;
}

int main()
{
    int option;
    double x;
    double y;
    double result;

    do
    {
        Menu();
        cout << "Option: ";
        cin >> option;

        switch (option)
        {
            case 1:
            Calculator a;
            cout << "Die erste Zahl: ";
            cin >> x;
            cout << "Die zweite Zahl: ";
            cin >> y;
            result = a.plus(x, y);
            cout << x << " + " << y << " = " << result << endl;
            cout << endl;
            break;
            case 2:
            Calculator b;
            cout << "Die erste Zahl: ";
            cin >> x;
            cout << "Die zweite Zahl: ";
            cin >> y;
            result = b.minus(x, y);
            cout << x << " - " << y << " = " << result << endl;
            cout << endl;
            break;
            case 3:
            Calculator c;
            cout << "Die erste Zahl: ";
            cin >> x;
            cout << "Die zweite Zahl: ";
            cin >> y;
            result = c.multi(x, y);
            cout << x << " * " << y << " = " << result << endl;
            cout << endl;
            break;
            case 4:
            Calculator d;
            cout << "Die erste Zahl: ";
            cin >> x;
            cout << "Die zweite Zahl: ";
            cin >> y;
            result = d.div(x, y);
            cout << x << " / " << y << " = " << result << endl;
            cout << endl;
            break;
            default:
            break;
        } 
    } while (option != 5);
}