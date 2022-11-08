#include <iostream>
#include "BALL.h"
#include"CAR.h"
#include"BLOG.h"



int main()
{
	char Type_arr[] = "Football";
	char Color_arr[] = "BlackandWhite";

	Ball football(5, Type_arr, Color_arr);
	football.Jumping();
	football.Roll();
	football.WashAndPump(5, Color_arr);

	char NUmbercar1[] = "202-33-405";

	CAR Jeep(NUmbercar1);

	Jeep.carSits = 4;
	strcpy_s(Jeep.Color_car, "Black");
	Jeep.KM = 50;
	Jeep.Drives = 1;
	Jeep.To_drive(73);

	Jeep.To_drive(3000);

	Jeep.To_drive(400);
	Jeep.To_drive(60);
	Jeep.To_drive(8);
	Jeep.Status_car();
char NUmbercar2[] = "32-423-45";
	CAR BMW(NUmbercar2);

	BMW.carSits = 2;
	strcpy_s(BMW.Color_car,"White");
	BMW.KM = 340;
	BMW.Drives = 2;
	BMW.To_drive(3000);
	BMW.To_drive(600);
	BMW.To_drive(200);
	BMW.To_drive(120);
	BMW.To_drive(387);
	BMW.Status_car();
	
	char cheftext1[] = "hello my name is pablo i leave in tel aviv and i love to coock";
	char cheftext2[] = "frfrsgrgregrtgvtrctcbcbbg  ffvfd";
	char cheftext3[] = "hello mdfgdg  dfgh rthrn tynte etnn tnnfgb nhtnhn y ntt en";

	char name[] = "chef yaron";
	char text[10000];

	BLOG chef(name, 10000);

	
	chef.Write_inBloge(cheftext1);
	chef.Write_inBloge(cheftext2);
	chef.Write_inBloge(cheftext3);
	chef.LOAD_fromBlog();
	chef.print();

}
	