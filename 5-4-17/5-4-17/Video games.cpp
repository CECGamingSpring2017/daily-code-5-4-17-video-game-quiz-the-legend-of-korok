#include <iostream>
using namespace std;
int main() {
	char input;
	int smash=0;
	int zeldaBOTW=0;
	int Doom=0;
	int fireemblem=0;
		cout << "whats your fovorite food? Burger(b), Fruit(f), Ghost Peppers (g) or Baked Alaska (a)." << endl;
		cin >> input;
		if (input == 'b')
			smash++;
		else if (input == 'f')
			zeldaBOTW++;
		else if (input == 'g')
			Doom++;
		else if (input == 'a')
			fireemblem++;
		else
			cout << "not valid" << endl << endl;

		cout << "whats your fovorite activity? Chess(c), Hiking(h), boxing (b) or Biking(f)." << endl;
		cin >> input;
		if (input == 'f')
			smash++;
		else if (input == 'h')
			zeldaBOTW++;
		else if (input == 'b')
			Doom++;
		else if (input == 'c')
			fireemblem++;
		else
			cout << "not valid" << endl << endl;

		cout << "what kind of game do you like to play? Fighting(f), Open world(o), Shooters (s) or Stratagy (p)." << endl;
		cin >> input;
		if (input == 'f')
			smash++;
		else if (input == 'o')
			zeldaBOTW++;
		else if (input == 's')
			Doom++;
		else if (input == 'p')
			fireemblem++;
		else
			cout << "not valid" << endl << endl;

	if ((smash > zeldaBOTW) && (smash > Doom) && (smash > fireemblem))
		cout << "you should play Super Smash Brothers." << endl;
	else if ((smash < zeldaBOTW) && (zeldaBOTW > Doom) && (zeldaBOTW > fireemblem))
		cout << "you should play The legend of zelda: Breath of the wild." << endl;
	else if ((smash < Doom) && (zeldaBOTW < Doom) && (Doom > fireemblem))
		cout << "you should play Doom." << endl;
	else if ((smash < fireemblem) && (fireemblem > Doom) && (zeldaBOTW < fireemblem))
		cout << "you should play Fire Emblem." << endl;
}