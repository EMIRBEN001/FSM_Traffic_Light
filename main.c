#include <stdio.h> // For stdout
#include "mylib/xplatform.c" // For cross-platform xsleep() and xcls()

void goToState(void); // Prototype

// Define states (enumerated types - like ints)
enum states { IDLE, TURN, SUCCESS, FAILED};
int currState = -1;

int main(void) {

	while(1) {
        xcls();
        printf("\nVideo Game Animation\n");
        printf("\nDrawn by Emir Ben -2602206770\n");
	    printf("Terminate with Ctrl-C\n\n");
		goToState();
	}
	return 0;
}

void goToState(void) {
    int choice;
	currState++;
	switch(currState) {
		case IDLE: // IDLE
			printf(" _________________________________________________\n");
            printf("|#############################################|##|\n");
            printf("|#|###########################################|##|\n");
            printf("|#|      [=. . . . . . . . . . . . . . ]01/100|##|\n");
            printf("|#|              MMM         MMM              |##|\n");
            printf("|#|       MMM    MMMMMMMMMMMMMMM    MMM       |##|\n");
            printf("|#|       MMM    MMMMMMMMMMMMMMM    MMM       |##|\n");
            printf("|#|       M      MMMMMMMMMMMMMMM      M       |##|\n");
            printf("|#|       MMMM        MMMMM        MMMM       |##|\n");
            printf("|#|         MMMM      MMMMM      MMMM         |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MM               MM            |##|\n");
            printf("|#|         MMMMM               MMMMM         |##|\n");
            printf("|#|     MMMMMMMMM               MMMMMMMM      |##|\n");
            printf("|#|================[YOUR TURN]================|##|\n");
            printf("|#|```````````````````````````````````````````|##|\n");
            printf("|#|            [WHAT WILL YOU DO?]            |##|\n");
            printf("|#|                                           |##|\n");
            printf("|#|===========================================|##|\n");
            printf("|################################################|\n");
            printf("|#####|   |#######################[  ]#[  ]######|\n");
            printf("|###| | | | |####################################|\n");
            printf("|#####|   |#########################[  ]#[  ]####|\n");
            printf("|################################################|\n");
            printf("//////////////////////////////////////////////////\n");
            printf("|______________|SHIN MEGOOMI TENSEI|____________|\n");
            printf("Choice (0/1):");
            scanf("%d", &choice);
            if (choice != 1){
                currState = -1;
            }
           break;
			
		case TURN: // Player's Turn
			printf(" _________________________________________________\n");
            printf("|#############################################|##|\n");
            printf("|#|###########################################|##|\n");
            printf("|#|      [=. . . . . . . . . . . . . . ]01/100|##|\n");
            printf("|#|              MMM         MMM              |##|\n");
            printf("|#|       MMM    MMMMMMMMMMMMMMM    MMM       |##|\n");
            printf("|#|       MMM    MMMMMMMMMMMMMMM    MMM       |##|\n");
            printf("|#|       M      MMMMMMMMMMMMMMM      M       |##|\n");
            printf("|#|       MMMM        MMMMM        MMMM       |##|\n");
            printf("|#|         MMMM      MMMMM      MMMM         |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MMMMMMMMMMMMMMMMMMM            |##|\n");
            printf("|#|            MM               MM            |##|\n");
            printf("|#|         MMMMM               MMMMM         |##|\n");
            printf("|#|     MMMMMMMMM               MMMMMMMM      |##|\n");
            printf("|#|===========================================|##|\n");
            printf("|#|```````````````````````````````````````````|##|\n");
            printf("|#|   [ATTACK!]      |ITEMS|     [NOTHING]    |##|\n");
            printf("|#|      (1)                        (0)       |##|\n");
            printf("|#|===========================================|##|\n");
            printf("|################################################|\n");
            printf("|#####|   |#######################[  ]#[  ]######|\n");
            printf("|###| | | | |####################################|\n");
            printf("|#####|   |#########################[  ]#[  ]####|\n");
            printf("|################################################|\n");
            printf("//////////////////////////////////////////////////\n");
            printf("|______________|SHIN MEGOOMI TENSEI|____________|\n");
            printf("Choice (0/1):");
            scanf("%d", &choice);
            if (choice != 1){
                currState = 2;
            };
			break;
			
		case SUCCESS: // Success Info
			printf(" _________________________________________________\n");
            printf("|#############################################|##|\n");
            printf("|#|###########################################|##|\n");
            printf("|#|      [ . . . . . . . . . . . . . . ]00/100|##|\n");
            printf("|#|              MMM         MM               |##|\n");
            printf("|#|       MMM    MMMMMM  MMMMM  M    MMM      |##|\n");
            printf("|#|       MMM    MMM  MMMMMMM  MM    MMM      |##|\n");
            printf("|#|       M      MMMM  MMMMM  MMM      M      |##|\n");
            printf("|#|       MMMM        MMMM          MMMM      |##|\n");
            printf("|#|         MMM            M      MMMM        |##|\n");
            printf("|#|            M  M  ________                 |##|\n");
            printf("|#|         MMMMM   |  YOU   |    MMM          |##|\n");
            printf("|#|            MM   | WIN!!! |   MMM           |##|\n");
            printf("|#|            MM   |________|                 |##|\n");
            printf("|#|            MM  M             MM           |##|\n");
            printf("|#|            MM               MM            |##|\n");
            printf("|#|         MMMMM               MM  M         |##|\n");
            printf("|#|     MMMMMMMMM               MMMM   M      |##|\n");
            printf("|#|===========================================|##|\n");
            printf("|#|```````````````````````````````````````````|##|\n");
            printf("|#|   [ATTACK!]      |ITEMS|     [NOTHING]    |##|\n");
            printf("|#|      (1)                        (0)       |##|\n");
            printf("|#|===========================================|##|\n");
            printf("|################################################|\n");
            printf("|#####|   |#######################[  ]#[  ]######|\n");
            printf("|###| | | | |####################################|\n");
            printf("|#####|   |#########################[  ]#[  ]####|\n");
            printf("|################################################|\n");
            printf("//////////////////////////////////////////////////\n");
            printf("|______________|SHIN MEGOOMI TENSEI|____________|\n");
			currState = -1;
            break;
        
        case FAILED: // Failed info
			printf(" _________________________________________________\n");
            printf("|#############################################|##|\n");
            printf("|#|###########################################|##|\n");
            printf("|#|      [=. . . . . . . . . . . . . . ]01/100|##|\n");
            printf("|#|              MMM         MMM              |##|\n");
            printf("|#|       MMM    MMMMMMMMMMMMMMM    MMM       |##|\n");
            printf("|#|       MMM    MMMMMMMMMMMMMMM    MMM       |##|\n");
            printf("|#|       _____________________________       |##|\n");
            printf("|#|      |         # # ### # #         |      |##|\n");
            printf("|#|      |         # # # # # #         |      |##|\n");
            printf("|#|      |          #  ### ###         |      |##|\n");
            printf("|#|      |                             |      |##|\n");
            printf("|#|      |       ##   #  ###  ##       |      |##|\n");
            printf("|#|      |       # #  #  ##   # #      |      |##|\n");
            printf("|#|      |       ##   #  ###  ##       |      |##|\n");
            printf("|#|      |_____________________________|       |##|\n");
            printf("|#|         MMMMM               MMMMM         |##|\n");
            printf("|#|     MMMMMMMMM               MMMMMMMM      |##|\n");
            printf("|#|===========================================|##|\n");
            printf("|#|```````````````````````````````````````````|##|\n");
            printf("|#|   [ATTACK!]      |ITEMS|     [NOTHING]    |##|\n");
            printf("|#|      (1)                        (0)       |##|\n");
            printf("|#|===========================================|##|\n");
            printf("|################################################|\n");
            printf("|#####|   |#######################[  ]#[  ]######|\n");
            printf("|###| | | | |####################################|\n");
            printf("|#####|   |#########################[  ]#[  ]####|\n");
            printf("|################################################|\n");
            printf("//////////////////////////////////////////////////\n");
            printf("|______________|SHIN MEGOOMI TENSEI|____________|\n");
			currState = -1;
            break;
	}
	xsleep(3000); // Time: 3 Sec
}
