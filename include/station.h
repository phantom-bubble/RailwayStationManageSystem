#pragma once

#include "../include/city.h"
#include "../include/time.h"

namespace station_system {
using namespace std;

class BaseStation;
using Station = shared_ptr<BaseStation>;
Station station(const City, const Time);

class BaseStation {
public:
  BaseStation(const City, const Time);

private:
  City _city;
  Time _time;
};
} // namespace station_system