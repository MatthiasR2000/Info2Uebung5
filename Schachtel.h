//
// Created by Matthias Roos on 05.06.25.
//

#ifndef SCHACHTEL_H
#define SCHACHTEL_H
#include "Ei.h"
#include <vector>
#include <fstream>

class Schachtel {
private:
    string marke;
    vector<Ei*> eier;
public:
    Schachtel(string Marke);
    ~Schachtel();
    void readEggs();
    void addEggs(Ei* ei);
    void listEggs() const;
    int searchEgg(string eiKennzeichnung);
};



#endif //SCHACHTEL_H
