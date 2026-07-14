#include <iostream> 
#include <string>

using namespace std;

class HCN { 
    private : 
    double cdai , crong ;
    public : 
    void setdai ( double dai ){
        if ( dai <= 0 ){
            cout << " khong hop le chieu dai tu dong duoc chuyen ve 1 "<<endl;
            dai == 1;
        }
        dai = cdai ;
    }
    void setrong ( double rong ){
        if ( rong <= 0 ){
            cout << " chieu rong khong hop le chieu rong tu dong duoc chuyen ve 1 " <<endl;
            rong == 1;
        }
        crong = rong;
    }
    HCN ( double dai , double rong ){
        setdai(dai);
        setrong(rong);
    }
    double chuvi(){
        double cv = ( cdai + crong ) * 2;
        return cv;
    }
    double dientich(){
        double dt = ( cdai * crong );
        return dt;
    }
};

int main (){
    int d , r ;
    cout << " nhap chieu dai : ";
    cin >> d;
    cout << " nhap chieu rong : ";
    cin >> r;
    HCN hcn(d,r);
    cout << " chu vi cua hcn do la : " << hcn.chuvi() << endl;
    cout << " dien tich cua hcn do la : " << hcn.dientich() << endl;
    return 0;
}