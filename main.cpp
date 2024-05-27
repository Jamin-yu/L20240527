#include <iostream>
#include "World.h"

using namespace std;

int main()
{
	FWorld* World;

	cout << "포인터만 생성" << endl;
	World = new FWorld(); // 포인터 생성됨
	delete World;

	return 0;
}