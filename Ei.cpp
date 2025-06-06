//
// Created by Matthias Roos on 05.06.25.
//

#include "Ei.h"

Ei::Ei(string farbe, string eiKennzeichnung) {
    this->farbe = farbe;
    this->eiKennzeichnung = eiKennzeichnung;
    if (this->eiKennzeichnung.substr(0, 1) == "0") {
        this->istBio = true;
    } else {
        this->istBio = false;
    }
}

ostream& operator<<(ostream& os, const Ei& ei) {
    os << "Farbe: " << ei.farbe
    << " Ei-Kennzeichnung: " << ei.eiKennzeichnung
    << " istBio: " << ei.istBio;
    return os;
}

string Ei::getEiKennzeichnung() const {
    return this->eiKennzeichnung;
}
