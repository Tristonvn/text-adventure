//Basic text adventure game
#include <iostream>
#include <stdlib.h>

int main() {
	bool nightmare = false; //counter for the nightmare event to trigger
	bool flagQuestion = true; //flag to ensure a valid option is picked
	int choice = 0; //receives the choice option picked by the user. default value is 0
	std::string choiceString = "What do you do now?\n\n";

	std::cout << "                                 ---- The Shores of Madness: Text Adventure ----\n";
	std::cout << "You awake to the sound of wave lapping the shore. You slowly raise your head and then your body, still in a slight daze.\n";
	std::cout << "The sound of the sand crunches from your weight as you come to a standing position. You look around, nothing but an empty beach and an endless sea.\n";
	std::cout << "A lone pillar stands a few meters from you, its silhouette highlighted by the setting sun.\n";

	//First set of options
	while (flagQuestion) {
		std::cout << choiceString;
		std::cout << "1) Shout for help.\n";
		std::cout << "2) Investigate the pillar.\n";
		std::cout << "3) Walk along the shore looking for someone.\n";
		std::cout << "4) Stare into the ocean.\n";
		std::cin >> choice;

		switch (choice) {
		case 1:
			system("CLS");
			std::cout << "Your shouts fade into the nothingness.\n";
			break;
		case 2:
			system("CLS");
			flagQuestion = false;
			break;
		case 3:
			system("CLS");
			std::cout << "You begin the walk along the shoreline. Your footprints trail behind you, fading into the horizon.\n";
			std::cout << "After what feels like hours, you happend apon a pillar. Is it the same one from before?\n";	
			break;
		case 4:
			system("CLS");
			nightmare = true;
			flagQuestion = false;
			break;
		default:
			system("CLS");
			std::cout << "Invalid input\n";
			break;
		}
	}

	flagQuestion = true; //reset the flag

	if (!nightmare) {
		std::cout << "You approached the monolith. Its stoney appearance is battered by storm and sea. Bits of seaweed drape over the cracks.\n";
		std::cout << "Moss and algae cover what seem to be letters. Though not letters in a langauge that is fimilar to you\n";
		std::cout << "At the base of the pillar lies a book. The book does not share the pillars weathered look but instead seems somewhat prestine\n";
		while (flagQuestion) {
			std::cout << choiceString;
			std::cout << "1) Pick up the book.\n";
			std::cout << "2) Look closer at the letters on the pillar.\n";
			std::cin >> choice;

			switch (choice) {
			case 1:
				system("CLS");
				std::cout << "You examine the cover. The book is bound in a thick leather hide, stiff from age.\n";
				flagQuestion = false;
				break;
			case 2:
				system("CLS");
				std::cout << "You brush away the moss and algae that cover the letters. You look closer at the letters but now seem more like symbols.\n";
				std::cout << "They seem irratic, like the scribbles of a madman.";
				break;
			default:
				system("CLS");
				std::cout << "Invalid input\n";
				break;
			}
		}
	}




}