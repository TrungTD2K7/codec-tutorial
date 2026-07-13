#include <iostream>

using namespace std ;

class HCN {
    private :
    double cdai ;
    double crong ;

    public : 
    void setdai (double dai){
        while (dai <= 0){
            cout << " chieu dai khong hop le ";
            cin >> dai;
        }
        cdai = dai;
    }
    void setrong ( double rong ){
        while ( rong <= 0 ){
            cout << " chieu rong khong hop le ";
            cin >> rong;
        }
        crong = rong ;
    }
    HCN ( double dai , double rong) {
        setdai(dai);
        setrong(rong);
    }
    double chuvi() { return ( cdai + crong ) * 2 ;}
    double dientich() { return cdai * crong ; }

};

int main() {
    double d , r ;
    cout << " nhap chieu dai ";
    cin >> d;
    cout << " nhap chieu rong ";
    cin >> r;
    HCN hcn(d,r);
    cout << " chu vi hcn la : " << hcn.chuvi() << endl ;
    cout << " dien tich hcn la : " << hcn.dientich() << endl ;
    return 0;
}