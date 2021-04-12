//Basic text adventure game
#include <iostream>
#include <stdlib.h>

int main() {
	int nightmare = 0; //counter for the nightmare event to trigger
	bool flagQuestion = true; //flag to ensure a valid option is picked
	int choice = 0; //receives the choice option picked by the user. default value is 0

	std::cout << "                                 ---- The Shores of Madness: Text Adventure ----\n";
	std::cout << "You awake to the sound of wave lapping the shore. You slowly raise your head and then your body, still in a slight daze.\n";
	std::cout << "The sound of the sand crunches from your weight as you come to a standing position. You look around, nothing but an empty beach and an endless sea.\n";
	std::cout << "A lone pillar stands a few meters from you, its silhouette highlighted by the setting sun.\n";
	std::cout << "What do you do?\n\n";

	while (flagQuestion = true) {
		std::cout << "1) Shout for help.\n";
		std::cout << "2) Investigate the pillar.\n";
		std::cout << "3) Walk along the shore looking for someone.\n";
		std::cin >> choice;

		switch (choice) {
		case 1:
			system("CLS");
			std::cout << "Your shouts fade into the nothingness.";
			std::cout << "What do you do now?\n\n";
			break;
		case 2:
			break;
		case 3:
			system("CLS");
			std::cout << "You begin the walk along the shoreline. Your footprints trail behind you, fading into the horizon.\n";
			std::cout << "After what feels like hours, you happend apon a pillar. Is it the same one from before?\n";
			std::cout << "What do you do now?\n\n";
			break;
		default:
			system("CLS");
			std::cout << "Invalid input";
			break;

		}
	}


}