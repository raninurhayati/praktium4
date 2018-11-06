#include<iostream>
using namespace std;
int main() {
    int N,a,b,d,hb;
    int e=0;
    int i=0;
    float dis=0.0;
    int total=0;
    int stotal=0;

    cout<<" selamat datang \n";
    cout<<"di \n";
    cout<<" indoapril \n";
    cout<<" \n";
    cout<<"--------  \n";
    cout<<"--------- \n";
    cout<< N;
    cout<<"berapa macam barang yang akan anda beli?  \n";
    cin>> N;
    cout<<  "\n";

    do{
    cout<<"berapa barang yang akan anda beli \n";
    cin>> a;
    cout<<" berapa harga persatu barang yang anda beli? \n";
    cin>> b;
    cout<< " \n";


    hb=a*b;
    stotal=stotal+hb;

    i=i+1;
    cout<< " \n";
    cout<< "harga barang tersebut adalah "<<hb<<" \n";


    } while (i < N) ;

    if(stotal <=1000000){
        dis= (stotal/100)*10;
        total =stotal -dis;
        d=10;

    } else{
        if (stotal>500000){
            dis= (stotal/100)*5;
        total =stotal -dis;
        d=5;

        } else {
            total= stotal;
            d=0;

        }




    }




    cout<<"total belnja:"<< stotal<< " \n";
    cout<<"diskon:" << d << "% \n";
    cout<<"total"<< total<<" \n";


    }

















