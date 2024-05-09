
#pragma once
#include <cstdint>
#include <string>

class Telephely;  

class KozlekedesiEszkoz
{
public:
    KozlekedesiEszkoz(const int meter);

    uint16_t GetId() const;
    uint16_t getKm() const;
    Telephely* getTelep() const;
    void setKm(const uint16_t ujkm);
    void Felvesz(Telephely* const telep);
    void Lead(KozlekedesiEszkoz* const telep);
    virtual std::string ToString() const;
private:

    static uint16_t sID;
    const uint16_t mID;
    uint16_t mMegtettMeter;
    Telephely* mTelep = nullptr;  
};
