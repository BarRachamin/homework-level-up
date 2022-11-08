#pragma once
class CAR
{
public:
	int KM;
	char Color_car[20];
	char numberCar[10];
	int carSits;
	unsigned int Drives;

	CAR(char nNumbercar[10]);
	void To_drive(int Nkm);
	void Status_car();
};

