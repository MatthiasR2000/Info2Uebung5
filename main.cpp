#include "Schachtel.h"

int main() {

    Schachtel schachtel("El-Loco-Pollo");
    schachtel.readEggs();
    schachtel.listEggs();

    cout << schachtel.searchEgg("1-DE-12345") << endl;
    cout << schachtel.searchEgg("0-DE-12345") << endl;
    cout << schachtel.searchEgg("0-DE-2345") << endl;

    return 0;
}