
#include "main.h"

CVehiclePool::CVehiclePool()
{
	for(VEHICLEID VehicleID = 0; VehicleID != MAX_VEHICLES; VehicleID++) {
		field_2014[VehicleID] = 0;
		field_3F54[VehicleID] = 0;
		field_D4[VehicleID] = 0;
	}
	memset(field_0,0,sizeof(field_0));
	field_5E94 = 0;
}
