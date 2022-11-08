#include "CAR.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)

CAR::CAR(char nNumbercar[10])
{
	strcpy(numberCar, nNumbercar);

}

void CAR::To_drive(int Nkm)
{
	KM += Nkm;
	Drives += 1;
}

void CAR::Status_car()
{
	printf("KM: %d\n", KM);
	printf("Color_car: %s\n", Color_car);
	printf("Number_car: %s\n", numberCar);
	printf("Car_sits: %d\n", carSits);
	printf("Drives: %d\n", Drives);
	printf("Average km per Drive: %d\n", KM / Drives);
}
