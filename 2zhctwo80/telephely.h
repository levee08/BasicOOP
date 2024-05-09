#pragma once
#include <queue>
#include <iostream>
#include <string>
#include "kozlekedesiEszkoz.h"
#include "auto.h"
#include "Motor.h"
#include "kerekpar.h"

class Telephely {
private:
    std::string nev;
    std::queue<Auto*> autos;
    std::queue<Motor*> motors;
    std::queue<Kerekpar*> biciklik;

public:
    Telephely(const std::string& nev);
    void Lead(KozlekedesiEszkoz* eszkoz);
    template<typename T>
    void Felvesz();
};
