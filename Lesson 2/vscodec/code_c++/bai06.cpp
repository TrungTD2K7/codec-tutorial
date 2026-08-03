#include <iostream>
#include <string>

using namespace std;

class Dvat{
    protected:
    string ten;

    public:
    void dongvat(string t){
        ten = t;
    }
    void an(){
        cout << ten << " dang an " <<endl;
    }
};

class cho : public Dvat{
    
}