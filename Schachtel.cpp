//
// Created by Matthias Roos on 05.06.25.
//

#include "Schachtel.h"


Schachtel::Schachtel(string marke) {
    this->marke = marke;
}

Schachtel::~Schachtel() {
    for (auto& ei : eier) {
        delete ei;
    }
    cout << "\nEier gelöscht" << endl;
}

void Schachtel::readEggs() {
    fstream file;
    file.open("data.dat", ios::in);
    if (file.is_open()) {
        cout << "File open!" << endl;
        string farbe;
        string eiKennzeichnung;
        bool istBio;
        while (!file.eof()) {
            file >> farbe;
            file >> eiKennzeichnung;
            Ei* ei = new Ei(farbe, eiKennzeichnung);
            this->addEggs(ei);
        }
    }
    else {
        cout << "Archivo no abierto!" << endl;
    }
    file.close();
}

void Schachtel::addEggs(Ei* ei) {
    eier.push_back(ei);
}

void Schachtel::listEggs() const {
    if (eier.empty()) {
        cout << "Keine Eier in der Schachtel!" << endl;
    } else {
        for (Ei* ei : eier) {
            cout << *ei << endl;
        }
    }
}

int Schachtel::searchEgg(string eiKennzeichnung) {
    cout << "Eiersuche: " << eiKennzeichnung << endl;
    for (int i = 0; i < eier.size(); i++) {

        if (eiKennzeichnung == eier[i]->getEiKennzeichnung()) {
            cout << "Index: ";
            return i;
        }
    }
    cout << "Nicht gefunden: ";
    return -1;
}
