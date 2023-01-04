# FSM_VIDEO_GAME_SCREEN
# Running the Code
this is how you run the code: \
Disclaimer: make sure to run the "make clear" command on the terminal to run the code smoothly as instructed 
```
make run
./main.o
``` 
and after that, this should appear \
IDLE State: \
<img width="358" alt="Screenshot_20230104_121118" src="https://user-images.githubusercontent.com/114371873/210550313-4412066e-1dcb-498e-b0ed-724d83686a75.png">

TURN state: \
<img width="305" alt="Screenshot_20230104_121140" src="https://user-images.githubusercontent.com/114371873/210550646-7493e5e1-0e89-457a-bd0d-76565227acd2.png">

in this state you you have 2 options to proceed \
1 = Attack which leads to the success state \
0 = Do nothing which leads to the Failed state

SUCCESS state: \
<img width="322" alt="Screenshot_20230104_121156" src="https://user-images.githubusercontent.com/114371873/210550931-bf42f651-a246-40d1-8458-bee2a314712b.png">


FAILED state: \
<img width="325" alt="Screenshot_20230104_121219" src="https://user-images.githubusercontent.com/114371873/210551112-506de47a-ac7d-47f0-9f46-ca1f11abfcc6.png">

after the success state or the Failed state it will go back to the Idle state, the program will stop when you press Ctrl + c 

# Finite State Machine
Finite state machine (FSM) is a term used by programmers, mathematicians, engineers and other professionals to describe a mathematical model for any system that has a limited number of conditional states of being.

This is the design for the finite state machine from the program above.
<img width="778" alt="image" src="https://user-images.githubusercontent.com/114371873/210552204-2c7ea1fb-a21f-4c2f-9099-2c94d2f9bf7b.png">
# Truth Table
Here's the truth table for the FSM Above:
<img width="508" alt="image" src="https://user-images.githubusercontent.com/114371873/210552666-85e434c7-92b2-462b-b11f-3cf4d7788137.png">
# Karnough Map and the derived Boolean equations
Here's the Karnough map and the derived boolean equations for the FSM:
<img width="333" alt="image" src="https://user-images.githubusercontent.com/114371873/210552907-df5b2721-277c-4c8f-a2f4-3d2e55c1dc4b.png">




