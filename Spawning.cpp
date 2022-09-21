#include <iostream>
#include "FishInfo.h"
#include "Spawning.h"

//constructor
Spawning::Spawning() {

}

//Function for selecting fish type
void Spawning::show() {
	std::cout << "\nPasirinktas zuvies tipas -> " << getFish() << std::endl;
	std::cout << "Ar norite pakeisti zuvies tipa? (Yes/No): \n" << std::endl;
	int nTempNumb = 0;
	std::string strTemp;
	std::cin >> strTemp;
	if (strTemp.compare("yes") == 0 || strTemp.compare("Yes") == 0 || strTemp.compare("y") == 0) {
		system("CLS");
		do {
			std::cout << "Iveskite norima zuvies tipa:\n" << std::endl;
			setAnotherFish(std::cin);
			for (int i = 0; i < FishInfo::arraySize(); i++) {
				if (getFish() == FishInfo::getFishType(i))
					nTempNumb = 1;
			}
			if (nTempNumb == 0) {
				std::cout << "Ivedete neteisingai! Bandykite dar karta. " << std::endl;
			}
		} while (nTempNumb == 0);
		system("CLS");
		std::cout << "\nPasirinktas zuvies tipas -> " << getFish() << std::endl;
	}
	else {
		if (strTemp.compare("No") == 0 || strTemp.compare("no") == 0 || strTemp.compare("n") == 0) {
			system("CLS");
			std::cout << "\nPasirinktas zuvies tipas -> " << getFish() << "\n" << std::endl;
		}
	}

}

//Show all types of fishes in the list
void Spawning::FishList() {
	for (int i = 0; i < arraySize(); i++) {
		std::cout << i + 1 << ". " << FishInfo::getFishType(i) << std::endl;
	}

}

//Function to show info about selected Fish type
void Spawning::SpawningDuration() {
	for (int i = 0; i < arraySize(); i++) {
		if (getFish() == getFishType(i)) {
			switch (i) {
			case 0: std::cout << "* Lydekas draudziama gaudyti nuo Vasario 1 dienos iki Balandzio 30 dienos.\n* Vienos zvejybos metu galima pasiimti tik 2 lydekas, ne mazesnes kaip 50cm.\n* Bendras sugautu zuvu kiekis negali virsyti 5kg.\n" << std::endl;
				break;
			case 1: std::cout << "* Upetakius draudziama gaudyti nuo Spalio 1 dienos iki Gruodzio 31 dienos.\n* Privaloma paleisti visus sugautus upetakius, mazesnius negu 30cm.\n* Draudziama naudoti gyvos kilmes masalus gaudant upetakius.\n* Tam tikrose vietose galioja vieno kablio zvejybos apribojimai.\n" << std::endl;
				break;
			case 2: std::cout << "* Nuo Rugsejo 16 dienos iki Spalio 15 dienos reikalinga zvejo megejo kortele.\n* Privaloma paleisti visas sugautas lasisas, mazesnes negu 65cm.\n* Nuo Spalio 1 dienos iki Spalio 15 dienos zvejoti leidziama tik paleidziant visas lasisas atgal.\n* Zuvitakiuose ir arciau kaip 100 m zemiau tvenkiniu vandens nuleistuvu (uztvanku) zvejoti draudziama.\n* Lasisu zvejyba yra limituota, todel vienos zvejybos metu galima pasiimt tik viena zuvi ne mazesne kaip 65cm.\n* Zvejo megejo kortele privaloma tureti zvejybos vietoje.\n* Sugavus ir nepaleidus atgal i vandens telkini lasisos, ne veliau kaip per 5 minutes turi buti nuplesiama zvejo megejo korteles dalis.\n* Lasisas draudziama gaudyti nuo Spalio 16 dienos iki Gruodzio 25 dienos.\n* Zvejoti lasisas naturalios kilmes masalais draudziama.\n* Zvejoti lasisas galima praejus valandai laiko po saules patekejimo ir likus valandai laiko iki saules laikos.\n " << std::endl;
				break;
			case 3: std::cout << "* Nuo Rugsejo 16 dienos iki Spalio 15 dienos reikalinga zvejo megejo kortele.\n* Privaloma paleisti visus sugautus slakius, mazesnius negu 65cm.\n* Nuo Spalio 1 dienos iki Spalio 15 dienos zvejoti leidziama tik paleidziant visus slakius atgal.\n* Zuvitakiuose ir arciau kaip 100 m zemiau tvenkiniu vandens nuleistuvu (uztvanku) zvejoti draudziama.\n* Slakiu zvejyba yra limituota, todel vienos zvejybos metu galima pasiimt tik viena zuvi ne mazesne kaip 65cm.\n* Zvejo megejo kortele privaloma tureti zvejybos vietoje.\n* Sugavus ir nepaleidus atgal i vandens telkini slakio, ne veliau kaip per 5 minutes turi buti nuplesiama zvejo megejo korteles dalis.\n* Slakius draudziama gaudyti nuo Spalio 16 dienos iki Gruodzio 25 dienos.\n* Zvejoti slakius naturalios kilmes masalais draudziama.\n* Zvejoti slakius galima praejus valandai laiko po saules patekejimo ir likus valandai laiko iki saules laikos.\n " << std::endl;
				break;
			case 4: std::cout << "* Sterkus draudziama gaudyti nuo Kovo 1 iki Geguzes 20 dienos.\n* Privaloma paleisti visus sugautus sterkus, mazesnius negu 45cm.\n " << std::endl;
				break;
			case 5: std::cout << "* Salacius draudziama gaudyti nuo Balandzio 1 iki Geguzes 15 dienos.\n* Privaloma paleisti visus sugautus salacius, mazesnius negu 55cm.\n " << std::endl;
				break;
			case 6: std::cout << "* Kirslius draudziama gaudyti nuo Kovo 1 iki Geguzes 15 dienos.\n* Privaloma paleisti visus sugautus kirslius, mazesnius negu 30cm.\n " << std::endl;
				break;
			case 7: std::cout << "* Sykus draudziama gaudyti nuo Spalio 1 iki Gruodzio 31 dienos.\n " << std::endl;
				break;
			case 8: std::cout << "* Vegeles draudziama gaudyti nuo Gruodzio 15 iki Sausio 15 dienos.\n* Privaloma paleisti visas sugautas vegeles, mazesnes negu 45cm.\n " << std::endl;
				break;
			case 9: std::cout << "* Karsius draudziama gaudyti nuo Balandzio 20 iki Geguzes 20 dienos.\n* Zvejybos apribojimai galioja tik tam tikroje vietoje (Daugiau informacijos zukles vietu skiltyje).\n " << std::endl;
				break;
			case 10: std::cout << "* Ziobrius draudziama gaudyti nuo Geguzes 15 iki Birzelio 15 dienos.\n " << std::endl;
				break;
			case 11: std::cout << "* Samus draudziama gaudyti nuo Lapkricio 1 iki Balandzio 1 dienos.\n* Privaloma paleisti visus sugautus samus, mazesnius negu 75cm.\n " << std::endl;
				break;
			default: std::cout << "Blogai ivestas pasirinkimas!" << std::endl;
				break;
			}
		}
	}
}