#include <iostream>
using namespace std;

class HCN {
    private:
    double cdai;
    double crong;

    public: 
    void setdai(double dai){
        if ( dai <= 0 ){
            cout << " khong hop le tu dong chuyen ve gia tri 1 ";
            dai = 1;
        }
        cdai = dai;
    }

    void setrong(double rong){
        if ( rong <= 0){
            cout << " khong hop le tu dong chuyen ve gia tri 1 ";
            rong = 1;
        }
        crong = rong;
    }
    HCN( double dai , double rong ){
        setdai(dai);
        setrong(rong);
    }
    double chuvi(){
        return ( cdai + crong ) * 2;
    }
    double dientich(){
        return cdai * crong;
    }
};

int main(){
    double d , r;
    cout << " nhap chieu dai ";
    cin >> d;
    cout << " nhap chieu rong ";
    cin >> r;
    HCN hcn(d,r);
    cout<< " chu vi cua hinh chu nhat la : "<<hcn.chuvi()<<endl;
    cout << " dien tich cua hinh chu nhat la : "<<hcn.dientich();
    return 0;
}