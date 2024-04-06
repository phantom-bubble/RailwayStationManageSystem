#include "./include/train.h"
#include "include/route.h"
#include "include/station.h"
#include <fstream>
#include <iostream>

int main() {
  using namespace station_system;
  ifstream ifs{"test.data"};
  auto t = train("", route({}));

  t->load(ifs);

  cout << t->code() << endl;

  t->route()->save(cout);

  endl(cout);

  t->save(cout);
}
