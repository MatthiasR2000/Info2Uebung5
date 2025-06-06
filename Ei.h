//
// Created by Matthias Roos on 05.06.25.
//

#ifndef EI_H
#define EI_H

#include <iostream>
using namespace std;

class Ei {
private:
    string farbe;
    string eiKennzeichnung;
    bool istBio;
public:
    Ei(string farbe, string eiKennzeichnung);
    friend ostream& operator<<(ostream& os, const Ei& ei);
    string getEiKennzeichnung() const;
};



#endif //EI_H
