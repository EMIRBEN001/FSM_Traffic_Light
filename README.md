# FSM_VIDEO_GAME_SCREEN
# Running the Code
this is how you run the code: \ 
```
make run
./main.out
``` 
after you input the make run command the program will create a ./main.out file and to run the program type in the terminal ' ./main.out ' and and the program should run as intended with the respective outputs below

and after that, this should appear 
### **IDLE State:** 
<img width="358" alt="Screenshot_20230104_121118" src="https://user-images.githubusercontent.com/114371873/210550313-4412066e-1dcb-498e-b0ed-724d83686a75.png">
The Idle state represents the state when the character and both the enemy is on standby in this example i created a video game screen of a turn based video game such as the likes of Final Fantasy, Shin Megami Tensei, Dragon Quest, and the likes of Pokemon. 

### **TURN state:** 
<img width="305" alt="Screenshot_20230104_121140" src="https://user-images.githubusercontent.com/114371873/210550646-7493e5e1-0e89-457a-bd0d-76565227acd2.png">

This state is when the player turn is on standy in this state the player has to choose whether to attack or to do nothing in which the enemy turn will be next. \
in this state you you have 2 options to proceed \
1 = Attack which leads to the success state \
0 = Do nothing which leads to the Failed state

### **SUCCESS state:** 
<img width="322" alt="Screenshot_20230104_121156" src="https://user-images.githubusercontent.com/114371873/210550931-bf42f651-a246-40d1-8458-bee2a314712b.png">

This state is similiar to when you finally defeated your adversary in a turn based video game, in this state you win by Attacking the enemy which is represented by 1 on the input that you choose on the terminal, and after this state it will go back to the beginning.


### **FAILED state:** 
<img width="325" alt="Screenshot_20230104_121219" src="https://user-images.githubusercontent.com/114371873/210551112-506de47a-ac7d-47f0-9f46-ca1f11abfcc6.png">

And finally this state is for those unfortunate enough to not do anything on the turn which results in Death in a video game format of course but in this state is bascially the same as Success but different outcome. \

like the success state, the Failed state you will go back to the Idle state, the program will stop when you press Ctrl + c 

# Finite State Machine
Finite state machine (FSM) is a term used by programmers, mathematicians, engineers and other professionals to describe a mathematical model for any system that has a limited number of conditional states of being.

This is the design for the finite state machine from the program above. \
![FSM](https://user-images.githubusercontent.com/114371873/211802573-1bea7458-cefd-4dd3-9938-55291a37f073.jpg)


# Truth Table
Here's the truth table for the FSM Above: \
<img width="508" alt="image" src="https://user-images.githubusercontent.com/114371873/210552666-85e434c7-92b2-462b-b11f-3cf4d7788137.png">

# Karnough Map and the derived Boolean equations
Here's the Karnough map and the derived boolean equations for the FSM:\
![kmap](https://user-images.githubusercontent.com/114371873/211802814-3b4b7aeb-a8dd-49ba-9565-13105e7a6339.jpeg)





