#include <iostream>
#include <vector>
#include <memory>
#include "Auto.h"
#include "Motor.h"
#include "Kerekpar.h"
#include "Telephely.h"
#include <map>

std::map<std::string, int> saveNonTelephelyDevices(const std::vector<std::shared_ptr<KozlekedesiEszkoz>>& eszkozok) {
    std::map<std::string, int> nonTelephelyDevices;
    for (auto eszkoz : eszkozok) {
        if (eszkoz->getTelep() == nullptr) { 
            nonTelephelyDevices[eszkoz->GetId(), std::to_string(eszkoz->getKm())];
        }
    }
    
    return nonTelephelyDevices;
}

int main() {
    
    Telephely telephely("Fõ utca 1.");

        std::vector<std::shared_ptr<KozlekedesiEszkoz>> eszkozok;
    eszkozok.push_back(std::make_shared<Auto>(100));  
    eszkozok.push_back(std::make_shared<Motor>(50));  
    eszkozok.push_back(std::make_shared<Kerekpar>(10));  

    for (auto& eszkoz : eszkozok) {
        std::cout << eszkoz->ToString() << std::endl;
    }

    
    auto nonTelephelyDevices = saveNonTelephelyDevices(eszkozok);

    // Kiírjuk az eredményt
    for (const auto& pair : nonTelephelyDevices) {
        std::cout << "Eszkoz ID: " << pair.first << ", KM ora allas: " << pair.second << std::endl;
    }

    
    
}
