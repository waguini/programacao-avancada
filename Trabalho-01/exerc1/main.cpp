#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    double hotDogs = 0;
    double pessoas = 0;
    double result = 0 ;
    cout << "Digite o numero de hotdogs consumidos e total de pessoas" << endl;
    cin >> hotDogs >> pessoas;

    cout << "hotdogs: " << hotDogs << " pessoas: " << pessoas << endl;
    result = hotDogs / pessoas;

    cout << setprecision(2) << "media : " << result << endl;

    return 0;
}
