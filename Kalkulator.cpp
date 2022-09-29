#include <iostream>

using namespace std;

int main()
{
    float x, y;
    char operasi;
    
    cout << "masukkan nilai x= " << endl;
    cin >> x;
    cout << "masukkan operasi hitung= " << endl;
    cin >> operasi;
    cout << "masukkan nilai y= " << endl;
    cin >> y;
    
    switch (operasi) {
        case '+':
        cout << "Hasil penjumlahan adalah " << x + y ;
        break;
        case '-':
        cout << "Hasil pengurangan adalah " << x - y ;
        break;
        case '*':
        cout << "Hasil perkalian adalah " << x * y ;
        break;
        case '/':
        cout << "Hasil pembagian adalah " << x / y ;
        break;
        default:
        cout << "maaf anda tidak berhasil.";
         }
    
    return 0;
}
