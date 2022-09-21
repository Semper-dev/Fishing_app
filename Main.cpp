#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <algorithm>
#include "FishInfo.h"
#include "Spawning.h"
#include "FishingPlaces.h"
#include "Penalties.h"
#include "PersonalTrophyFish.h"

using namespace std;


int main()
{
	Spawning obj;
	FishingPlaces obj_1;
	PersonalTrophyFish obj_2;
	Penalties obj_3;
	PersonalTrophyFish::FInfo a[] = { {"lydeka", 5.5, 77, "neris"},
									 { "lydeka", 7.4, 55, "nemunas"},
									 { "eserys", 1.4, 18, "jura" },
									 { "upetakis", 2, 27, "ula" },
									 { "kirslys", 2.2, 33, "akmene" } };
	int choice; //menu variable
	//menu
	do {
		system("cls");
		cout << "\n\nSveiki prisijunge ! \n" << endl;
		cout << "1. Informacija, apie pasirinkta zuvi. " << endl;
		cout << "2. Zukles vietos ir apribojimai. " << endl;
		cout << "3. Baudos uz padarytus nusizengimus zvejojant. " << endl;
		cout << "4. Asmeninis didziausiu zuvu kampelis. " << endl;
		cout << "0. Baigti darba. \n" << endl;
		cout << "Ka pasirinksite? - ";
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1:	obj.FishList();
			obj.show();
			obj.SpawningDuration();
			system("pause>0");
			break;
		case 2:	obj.FishList();
			obj_1.show();
			obj_1.RestrictPlaces();
			system("pause>0");
			system("cls");
			break;
		case 3:	obj_3.show();
			system("pause>0");
			break;
		case 4:	obj_2.trophyFishList();
			obj_2.showInfo(a);
			//obj_2.InputFishInfo(a); // Rankinis trofejines zuvies duomenu ivedimas
			obj_2.biggestFish(a);
			obj_2.totalFishNumb(a);
			system("pause>0");
			system("cls");
			break;
		case 0:
			obj_2.show();
			system("pause>0");
			break;
		default: cout << "Blogai ivestas pasirinkimas. Bandykite dar karta !";
		}
	} while (choice != 0);

}