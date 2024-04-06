#include "../include/station.h"

namespace station_system {
using namespace std;

Station station(const City city, const Time arriavaltime, const Time departuretime) {
    return make_shared<BaseStation>(city, arriavaltime, departuretime);
}

BaseStation::BaseStation(const City city, const Time arrivaltime, const Time departuretime)
    : _city{ city }, _arrivaltime{ arrivaltime }, _departuretime{ departuretime } {}

const City BaseStation::city() const { return _city; }

void BaseStation::city(const City city) { _city = city; }

const Time BaseStation::arrivaltime() const { return _arrivaltime; }

const Time BaseStation::departuretime() const { return _departuretime; }

void BaseStation::arrivaltime(const Time time) { _arrivaltime = time; }

void BaseStation::departuretime(const Time time) { _departuretime = time; }

void BaseStation::save(ostream &os) {
  _city->save(os);
  _arrivaltime->save(os);
  _departuretime->save(os);
}

void BaseStation::load(istream &is) {
  _city->load(is);
  _arrivaltime->load(is);
  _departuretime->load(is);
}

} // namespace station_system
