#ifndef ACCELERATIONDATASTORE_H
#define ACCELERATIONDATASTORE_H

#include "AccelerationData.h"

class AccelerationDataStore {
public:
  void add(AccelerationData& accelerationData);

private:
  AccelerationData accelerationData[MAX_ACCELERATION_ITEMS];
  unsigned int totalAccelerationDataItems;

  void discardFirstItem(void);
};

#endif
