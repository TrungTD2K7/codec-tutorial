#include <iostream>
#include <string>

using namespace std;

class DongVat {
protected:
    string ten;

public:
    DongVat(string Ten) {
        ten = Ten;
    }

    void an() {
        cout << ten << " dang an..." << endl;
    }
};

class cho : public DongVat {
public:
    cho(string Ten) : DongVat(Ten) {}

    void sua() {
        cout << ten << " dang gau gau!" << endl;
    }
};

class meo : public DongVat {
public:
    meo(string Ten) : DongVat(Ten) {}

    void batChuot() {
        cout << ten << " dang rinh va bat chuot!" << endl;
    }
};

int main() {
    cho c("Cau Vang");
    c.an();
    c.sua();

    cout << "------------------" << endl;

    meo m("Meo Tom");
    m.an();
    m.batChuot();

    return 0;
}