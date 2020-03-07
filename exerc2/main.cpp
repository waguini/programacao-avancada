#include <iostream>

using namespace std;
void jogoDeBoca(){
    int n = 1;

    do{
        cout << "digite Um numero entre 3 e 10100" << endl;
        cin >> n;

        if(n < 3 || n > 10100){
            cout << "Numero invalido!";
            exit(1);
        }
        cout << n%3 << endl;
    }while(true);


}
int main() {

jogoDeBoca();



    return 0;
}
