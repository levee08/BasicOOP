#include "Motor.h"

Motor::Motor(int meter)
    : KozlekedesiEszkoz(meter), utolsoTankolasKm(meter)
{}

void Motor::Tankol() {
    int jelenlegiKm = getKm();
    if (jelenlegiKm - utolsoTankolasKm >100) {
        std::cout << "Auto azonosito: " << GetFormattedId()
            << ", Elozo tankolas KM: " << utolsoTankolasKm
            << ", Jelenlegi KM: " << jelenlegiKm << std::endl;
        utolsoTankolasKm = jelenlegiKm;
    }
}

std::string Motor::GetFormattedId() const {
    return "M" + std::to_string(GetId());
}
std::string Motor::ToString() const
{
    return "M" + std::to_string(GetId());
}
