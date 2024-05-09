#include "kozlekedesiEszkoz.h"
#include "telephely.h"

uint16_t KozlekedesiEszkoz::sID = 0;
KozlekedesiEszkoz::KozlekedesiEszkoz(const int meter)
	:mID(sID++)
	,mMegtettMeter(meter)
{}


uint16_t KozlekedesiEszkoz::GetId() const
{
	return mID;
}
uint16_t KozlekedesiEszkoz::getKm() const
{
	return mMegtettMeter;
}
void KozlekedesiEszkoz::setKm(const uint16_t ujkm)
{
	mMegtettMeter = ujkm;
}
Telephely* KozlekedesiEszkoz::getTelep() const
{
	return mTelep;
}

void KozlekedesiEszkoz::Felvesz(Telephely* const telep)
{
	mTelep = telep;

}

void KozlekedesiEszkoz::Lead(KozlekedesiEszkoz* const telep)
{
	mTelep = nullptr;
}



 std::string KozlekedesiEszkoz::ToString() const
{
	 return std::to_string(GetId()) + ".";
}