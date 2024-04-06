#pragma once

#include "../include/city.h"
#include "../include/time.h"

namespace station_system {
using namespace std;

class BaseStation;
using Station = shared_ptr<BaseStation>;
Station station(const City, const Time, const Time);

class BaseStation {
public:
  BaseStation(const City, const Time, const Time);

public:
  const City city() const;
  void city(const City);
  const Time arrivaltime() const;
  const Time departuretime() const;
  void arrivaltime(const Time);
  void departuretime(const Time);

  void save(ostream &);
  void load(istream &);

private:
  City _city;
  Time _arrivaltime;
  Time _departuretime;
};
} // namespace station_system
