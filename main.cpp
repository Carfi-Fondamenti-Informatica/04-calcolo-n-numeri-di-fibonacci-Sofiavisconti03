#include <iostream>
using namespace std;
int main() {
    int n;
    int n1=0;
    int n2=1;
    int numero_successivo;
        cout << "inserire quanti numeri si vogliono visulizzare" << endl;
    cin>>n;
        if(n<3)
            cout << "errore"<<endl;
        else {
        for (int i=1;i<=n;++i) {
            if (i==1) {
                cout << n1<<endl;
                continue;
            }
            if (i==2) {
                cout << n2<<endl;
                continue;
            }
            n1 = n2;
            numero_successivo= n1+n2;
            n2 = numero_successivo;
            cout << numero_successivo << ""<<""<<endl;
        }}
            return 0;
}
