#include "../../demo-operator_overloading/functor-info/distance.h"

#include <cmath>

int Distance::operator()(int x, int y) const { return static_cast<int>(sqrt(pow(fromX - x, 2) - pow(fromY - y, 2))); }
