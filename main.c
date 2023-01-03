#include <stdio.h> // For stdout
#include "mylib/xplatform.c" // For cross-platform xsleep() and xcls()

void goToState(void); // Prototype

// Define states (enumerated types - like ints)
enum states { RED, REDAMBER, GREEN, AMBER };
int currState = -1;

int main(void) {
	while(1) {
		xcls();
		printf("\nTraffic lights FSM\n");
		printf("Terminate with Ctrl-C\n\n");
		goToState();
	}
	return 0;
}

void goToState(void) {
	currState++;
	switch(currState) {
		case RED: // Red light
            printf("STOP!!!\n");
            printf("_____\n");
			printf("|[R]|\n");
			printf("| A |\n");
			printf("| G |\n");
            printf("-----\n");
			break;
			
		case REDAMBER: // Red + Amber lights
            printf("STOP!!!\n");
            printf("_____\n");
			printf("|[R]|\n");
			printf("|[A]|\n");
			printf("| G |\n");
            printf("-----\n");
			break;
			
		case GREEN: // Green light
            printf("you are free to go\n");
            printf("_____\n");
			printf("| R |\n");
			printf("| A |\n");
			printf("|[G]|\n");
            printf("-----\n");
			break;
			
		case AMBER: // Amber light
            printf("be careful\n");
            printf("_____\n");
			printf("| R |\n");
			printf("|[A]|\n");
			printf("| G |\n");
            printf("-----\n");
			currState = -1; // Continue ad naseum...
			break;		
	}
	xsleep(4000); // Timer delay; 4 seconds
}