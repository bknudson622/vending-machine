Ah, the days of automatically-dispensed tobacco products.  Once a ubiquitous fixture of night clubs and bowling alleys, the Art-o-mat vending machine brought a touch of style and elegance to carcinogen-laced inhalant devices. You popped in your quarters, pulled the correct knob, and packet of Lucky Strikes slid down the polished stainless steel chute into your eagerly awaiting nicotine-stained fingers. In this assignment, you are to write a menu-style program to simulate an updated Art-o-mat.  Your program must:

1) Print the following menu:

s - report the machine status
d - drop in a quarter
1 - pull the 1st knob
2 - pull the 2nd knob
3 - pull the 3rd knob
4 - pull the 4th knob
r - restock the machine
q - quit

2) Read in a selection from the user and take the appropriate action as described below.

3) Report machine status - should print the machine status, matching the format below:

1: 5 packs of Lucky Strikes
2: 7 packs of Camels
3: 1 packs of Gauloises
4: 6 packs of Pall Malls
You have 0 quarters to spend
There is $24.50 in the machine

4) Drop in a quarter - adds $0.25 that can be used to purchase something

5) Pull the 1st/2nd/3rd/4th knob - Try to purchase a pack using the following rules

Cost is $0.75 per pack
If you haven't added enough money, print:
(nothing happens)
If there is inventory of the selected item and the user has added at least $0.75
Print out the corresponding message
Take all of the quarters that the user has inserted and add them to the total money in the machine (sorry, no change!)
Messages:
A pack of Lucky Strikes slides into view. It's your lucky day!
A pack of Camels slides into view. Watch out, they spit!
A pack of Gauloises slides into view. Gauloises? Really?
A pack of Pall Malls slides into view. They rhyme!
If there is insufficient inventory of the requested item, the machine takes all your money (sad day), adds it to the total money in the machine, and prints:
You hear mechanical clanking, but no cigarettes appear.
6) Restock the machine - sets the inventory of each item to 10, the total money in the machine to $0.00, and prints the following:
A grouchy-looking attendant shows up and restocks the machine.

7) Quit - causes your program to exit after it prints:
So long!

8) Any other input should print:
I do not understand.

9) Initialize the simulation with the settings below:
5 packs of Lucky Strikes
7 packs of Camels
1 packs of Gauloises
6 packs of Pall Malls
You have 0 quarters to spend
There is $24.50 in the machine

Here is an example session (user responses shown in red):

      s - report the machine status
      d - drop in a quarter
      1 - pull the 1st knob
      2 - pull the 2nd knob
      3 - pull the 3rd knob
      4 - pull the 4th knob
      r - restock the machine
      q - quit
      s
      1: 5 packs of Lucky Strikes
      2: 7 packs of Camels
      3: 1 packs of Gauloises
      4: 6 packs of Pall Malls
      You have 0 quarters to spend
      There is $24.50 in the machine
      d
      ching
      d
      ching
      3
      (nothing happens)
      d
      ching
      3
      A pack of Gauloises slides into view.  Gauloises?  Really?
      d
      ching
      d
      ching
      d
      ching
      3
      You hear mechanical clanking, but no cigarettes appear.
      1
      (nothing happens)
      s
      1: 5 packs of Lucky Strikes
      2: 7 packs of Camels
      3: 0 packs of Gauloises
      4: 6 packs of Pall Malls
      You have 0 quarters to spend
      There is $26.00 in the machine
      r
      A grouchy-looking attendant shows up and restocks the machine.
      s
      1: 10 packs of Lucky Strikes
      2: 10 packs of Camels
      3: 10 packs of Gauloises
      4: 10 packs of Pall Malls
      You have 0 quarters to spend
      There is $0.00 in the machine
      q
      So long!