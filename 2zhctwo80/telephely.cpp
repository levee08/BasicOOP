#include "telephely.h"
#include "ITankolas.h"

Telephely::Telephely(const std::string& nev) : nev(nev) {}

void Telephely::Lead(KozlekedesiEszkoz* eszkoz) {
    std::cout << "Mennyi kilometer futott az eszkoz a telephelyre erkezes ota? ";
    int km;
    std::cin >> km;
    eszkoz->setKm(eszkoz->getKm() + km);
    std::cout << "Eszkoz (" << typeid(*eszkoz).name() << ") leadva " << nev << " telephelyen, "
        << "KM ora allas: " << eszkoz->getKm() << std::endl;

    
    ITankolas* tankolhato = dynamic_cast<ITankolas*>(eszkoz);
    if (tankolhato) {
        tankolhato->Tankol();
    }

    
    if (auto* autoPtr = dynamic_cast<Auto*>(eszkoz)) {
        autos.push(autoPtr);
    }
    else if (auto* motorPtr = dynamic_cast<Motor*>(eszkoz)) {
        motors.push(motorPtr);
    }
    else if (auto* bicikliPtr = dynamic_cast<Kerekpar*>(eszkoz)) {
        biciklik.push(bicikliPtr);
    }
}

template<typename T>
void Telephely::Felvesz() {
    std::queue<T*>& queue = (std::is_same<T, Auto>::value) ? reinterpret_cast<std::queue<T*>&>(autos) :
        (std::is_same<T, Motor>::value) ? reinterpret_cast<std::queue<T*>&>(motors) :
        reinterpret_cast<std::queue<T*>&>(biciklik);

    if (!queue.empty()) {
        T* eszkoz = queue.front();
        queue.pop();
        std::cout << "Eszkoz (" << typeid(*eszkoz).name() << ") felvéve " << nev << " telephelyen, "
            << "KM ora allas: " << eszkoz->getKm() << std::endl;
    }
    else {
        std::cout << "Nincs elérhetõ " << typeid(T).name() << " ezen a telephelyen." << std::endl;
    }
}
