#include "auto.h"

Auto::Auto(int meter)
    : KozlekedesiEszkoz(meter), utolsoTankolasKm(meter) 
{}

void Auto::Tankol() {
    int jelenlegiKm = getKm();
    if (jelenlegiKm - utolsoTankolasKm > 500) {
        std::cout << "Auto azonosito: " << GetFormattedId()
            << ", Elozo tankolas KM: " << utolsoTankolasKm
            << ", Jelenlegi KM: " << jelenlegiKm << std::endl;
        utolsoTankolasKm = jelenlegiKm; 
    }
}

std::string Auto::GetFormattedId() const {
    return "A" + std::to_string(GetId());
}
std::string Auto::ToString() const
{
    return "A" + std::to_string(GetId());
}
