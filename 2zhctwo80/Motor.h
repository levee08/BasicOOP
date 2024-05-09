#pragma once
#include "kozlekedesiEszkoz.h"
#include "ITankolas.h"
#include <iostream>
#include <string>

class Motor : public KozlekedesiEszkoz, public ITankolas {

public:
    Motor(int meter = 0);

    void Tankol() override;
    std::string GetFormattedId() const;
    std::string ToString() const override;

private:
    int utolsoTankolasKm;


};