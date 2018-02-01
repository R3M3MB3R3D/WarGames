#include "stdafx.h"
#include "iostream" //required for console commands
#include "cstdlib" //required for generating random numbers
#include "ctime" //required to seed the random number with time

using namespace std;

int main()
{
	srand(time(0)); //seeding the random number generator

	int number = rand() % 64 + 1; //random number between 1 and 64
	int number2 = rand() % 64 + 1; //random number between 1 and 64
	int high = 64; //highest possible position
	int low = 1; //lowest possible position
	int location = number; //variable for enemy location
	int search; //variable for what Skynet HK is searching
	int search2 = 1; //variable for what WarFrame is searching
	int search3; //variable for what Thunder is searching
	int search4; //variable for what Human is searching
	int count = 0; //variable for  Skynet HK Search Iteration
	int count2 = 0; //variable for WarFrame Search Iteration
	int count3 = 0; //variable for Thunder Search Iteration
	int count4 = 0; //variable for Human Search Iteration
	bool found = false; //variable for Skynet HK determining whether or not enemy was found
	bool found2 = false; //variable for WarFrame determining whether or not enemy was found
	bool found3 = false; //variable for Thunder determining whether or not enemy was found
	bool found4 = false; //variable for Human determining whether or not the enemy was found

	cout << "Welcome to War Games.\n";
	cout << "Begin your search:\n\n";

	while (found4 == false)
	{
		cin >> search4;
		count4 = count4 + 1;

		if (search4 != location)
		{
			cout << "No Target in Sight";
		}
		else if (search4 == location)
		{
			cout << "Target found!";
			found4 = true;
		}
	}

	cout << "Welcome to Skynet HK Aerial.\n";
	//cout << "Prepare Search for Target.\n\n";

	while (found == false)
	{
		int search = ((high - low) / 2) + low;
		count = count + 1;

		if (search > location)
		{
			high = search - 1;
			//cout << "==========================================================================\n";
			//cout << "Target not found at " << search << ", initiating sonar ping\n";
			//cout << "Moving to new location\n\n";
		}
		else if (search < location)
		{
			low = search + 1;
			//cout << "==========================================================================\n";
			//cout << "Target not found at " << search << ", initiating sonar ping\n";
			//cout << "Moving to new location\n\n";
		}
		else if (search == location)
		{
			//cout << "===========================================================================\n";
			cout << "Target Located at " << location << ".  " << count << " units were searched.\n\n";
			found = true;
		}
		else
		{
			//cout << "Critical error!\n";
			//cout << "Recover drone for diagnostics.\n\n";
			found = true;
		}
	}

	cout << "Greetings from WarFrame\n";
	//cout << "Initiating Search\n\n";

	while (found2 == false)
		//for (int i = 0; i <= location; i++) //attempting a for loop
	{
		search2 = search2 + 1;
		count2 = count2 + 1; // count2 ++; count +=1; acceptable phrases

		if (search2 != location)
		{
			search2;
			//cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			//cout << "Target not found, Continuing Search\n";
		}
		else if (search2 == location)
		{
			found2 = true;
			//cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout << "Tango encountered at " << location << ".  " << count2 << " locations were perused. \n\n";
		}
		else
		{
			found2 = true;
			//cout << "Product Malfunction!\n";
			//cout << "Recover Drone for Repair.\n\n";
		}
	}

	cout << "Say hello to Thunder!\n";
	//cout << "Let's go hunting!\n\n";

	while (found3 == false)
	{
		search3 = rand() % 64 + 1;
		count3 = count3 + 1;

		if (search3 != location)
		{
			search3 = rand() % 64 + 1;
			//cout << "-----------------------------------------------------------------------------\n";
			//cout << "I didn't find the bad guy yet, I'm gonna keep looking.\n";
		}
		else if (search3 == location)
		{
			found3 = true;
			//cout << "-----------------------------------------------------------------------------\n";
			cout << "I found the bad guy at " << location << ".  I checked " << count3 << " spots.\n\n";
		}
		else
		{
			found3 = true;
			//cout << "I messed up...\n";
			//cout << "Save me please.\n\n";
		}
	}

	cout << "Skynet HK found target in " << count << " attempts.\n";
	cout << "WarFrame found target in " << count2 << " attempts.\n";
	cout << "Thunder found target in " << count3 << " attempts.\n";
	cout << "You found target in " << count4 << " attempts.\n";

	system("pause");
	return 0;
}