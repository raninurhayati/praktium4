#praktikum4
## Latihan 1: Mencari angka terbesar dari sejumlah bilangan yang diinputkan sebelum diinputkan 0

**Alur algoritma**
1. Mendeklarasikan variabel `int i=0` `int max=0
2. Membaca input `cin >> n`
3. membandingkan `n> max` proses akan diulangi selama nilai n tidak berjumlah 0
4. Cetak `max`

**flowchart program**
![flowchart1](https://github.com/raninurhayati/praktium4/blob/master/flwochart1.PNG)


**Berikut code lengkapnya**
```
#include<iostream>
using namespace std;
int main() {
    int n=0;
    int max=0;

    do{
     cout<<"masukan bilangan (masukan 0 untuk berhenti) : ";
     cin>> n;

     if (n> max)
        max= n;

    } while (n!= 0);
    cout<< "bilangan terbesar adalah" << max;


}


```

**hasilnya**
![hasil1](https://github.com/raninurhayati/praktium4/blob/master/hasil1.PNG)


## Latihan 2: 

**Alur algoritma**
1. Mendeklarasikan variable `int N,a,b,d,e, hb 1,stotal dan float dis=0-0
2. tampilan pesan pembuka selamat datang
3. Masukan input dari user cin>>N
4. masukan input dari user cin >> a>>b
5. jumlahkan hb=a*b=stotal = stotal+hb;e e+a
6.cetak cout<< hb
7. tampilkan pesan urutan barang
8. ulangi dari langkah 4 sampai kondisi i<n bersifat false
9. bila stotal >= 1000000 hitung potong harga Nx10% dis(stotal/100)*10 lalu kurangi harga subtotal dengan potongan harga total=stotal-dis kemudian simpan presentase diskon
 d=10
10.bil stotal> 500000 hitung potongan harga Nx5% dis=(stotal/100*5 lalu kurangi harga subtotal dengan potongan harga total=stotal-dis kemudian simpan presentase diskon
 d=5
11.cetak cout<< N<< e << stotal << d << total 


**flowchart program**
![flowchart1](https://github.com/raninurhayati/praktium4/blob/master/flwochart2.PNG)




**Berikut code lengkapnya**
```
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



```

**hasilnya**

![hasil1](https://github.com/raninurhayati/praktium4/blob/master/hasil2.PNG)

