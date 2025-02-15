#include <iostream>
using namespace std;

int main(){
    int num = 10;
    int *ptr = &num;
    cout << "NUM | Value = 10 | Addres = 0x81b35ffd1c\n*PTR | Value = add num | Adress 0x81b35ffd10" << endl;
    cout << "NUM : " << num << endl;
    cout << "ADD NUM : " << &num << endl;
    cout << "*PTR : " << *ptr << endl;
    cout << "PTR : " << ptr << endl;
    cout << "&PTR : " << &ptr << endl;
    cout << "Melakukan perubahan";
}
