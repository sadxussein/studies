#include "AllTerrainBootsFactory.h"

Vehicle * AllTerrainBootsFactory::createVehicle() {
    return new AllTerrainBoots();
}
