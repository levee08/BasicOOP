#include "kerekpar.h"

Kerekpar::Kerekpar(int meter)
    : KozlekedesiEszkoz(meter) {} 

std::string Kerekpar::GetFormattedId() const {
    return "K" + std::to_string(GetId()); 
}
std::string Kerekpar::ToString() const 

{
    return "K" + std::to_string(GetId());
}
