#pragma once
#include "kozlekedesiEszkoz.h"
#include <string>

class Kerekpar : public KozlekedesiEszkoz {
public:
    Kerekpar(int meter = 0);

    std::string GetFormattedId() const; 
    std::string ToString() const override;
};
