#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {

	list<string> yamanoteLine{
	"Tokyo",
	"Yurakucho",
	"Shimbashi",
	"Hamamatsucho",
	"Tamachi",
	//"Takanawa Gateway" 2020�N�ǉ�
	"Shinagawa",
	"Osaki",
	"Gotanda",
	"Meguro",
	"Ebisu",
	"Shibuya",
	"Harajuku",
	"Yoyogi",
	"Shinjuku",
	"Shin-Okubo",
	"Takadanobaba",
	"Mejiro",
	"Ikebukuro",
	"Otsuka",
	"Sugamo",
	"Komagome",
	"Tabata",
	//"Nishi-Nippori", 1970�N�ǉ�
	"Nippori",
	"Uguisudani",
	"Ueno",
	"Okachimachi",
	"Akihabara",
	"Kanda"
	};

	cout << "1970�N" << "\n";
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		cout << *itr << "\n";
	}

	cout << "\n2018�N" << "\n";
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Nippori") {
			itr = yamanoteLine.insert(itr, "Nishi-Nippori");
			cout << *itr << "\n";
			++itr;
		}
		cout << *itr << "\n";
	}

	cout << "\n2022�N" << "\n";
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); ++itr) {
		if (*itr == "Shinagawa") {
			itr = yamanoteLine.insert(itr, "Takanawa Gateway");
			cout << *itr << "\n";
			++itr;
		}
		cout << *itr << "\n";
	}

	return 0;
}