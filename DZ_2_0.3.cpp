#include <iostream>
using namespace std;

class Drobn {
public:
    int chisl;
    int znam;

    void vvod() {
        cout << "Vvedite chislitel: ";
        cin >> chisl;
        cout << "Vvedite znamenatel: ";
        cin >> znam;
        if (znam == 0) {
            cout << "Nuh huh, znamenatel cant be menshe0! I place 1 bc i want.\n";
            znam = 1;
        }
    }

    void vivod() {
        cout << chisl << endl;
        cout << "-" << endl;
        cout << znam << endl;
    }

    Drobn plus(Drobn b) {
        Drobn rez;
        rez.chisl = chisl * b.znam + b.chisl * znam;
        rez.znam = znam * b.znam;
        return rez;
    }

    Drobn minus(Drobn b) {
        Drobn rez;
        rez.chisl = chisl * b.znam - b.chisl * znam;
        rez.znam = znam * b.znam;
        return rez;
    }

    Drobn umnoj(Drobn b) {
        Drobn rez;
        rez.chisl = chisl * b.chisl;
        rez.znam = znam * b.znam;
        return rez;
    }

    Drobn delenie(Drobn b) {
        Drobn rez;
        rez.chisl = chisl * b.znam;
        rez.znam = znam * b.chisl;
        return rez;
    }

    void Print(Drobn b, char op) {
        cout << chisl << "   " << b.chisl << endl;
        cout << "- " << op << " - " << endl;
        cout << znam << "   " << b.znam << endl;
    }

    void Print_Result(Drobn res) {
        cout << "\nAnswer: " << endl;
        cout << res.chisl << endl;
        cout << "-" << endl;
        cout << res.znam << endl;
        cout << "\n------------------------------" << endl;
        
    }
};

int main() {
    Drobn a, b, c;
    cout << "First drob:\n";
    a.vvod();
    cout << "Second drob:\n";
    b.vvod();
    cout << "\n------------------------------\n";
    cout << "\nOperation +\n";
    a.Print(b, '+');
    c = a.plus(b);
    a.Print_Result(c);
    cout << "\nOperation -\n";
    a.Print(b, '-');
    c = a.minus(b);
    a.Print_Result(c);
    cout << "\nOperation *\n";
    a.Print(b, '*');
    c = a.umnoj(b);
    a.Print_Result(c);
    cout << "\nOperation /\n";
    a.Print(b, '/');
    c = a.delenie(b);
    a.Print_Result(c);
    return 0;
}
