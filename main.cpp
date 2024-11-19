#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<const char*> station{ "Nishi-Nippori","Takanawa Gateway","Shimbashi" };  //西日暮里駅、高輪ゲートウェイ、新橋で初期化

	for (auto itr = station.begin();
		itr != station.end();
		itr++)
	{
		cout << *itr << endl;
	}

	return 0;
}