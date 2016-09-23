// ConsoleApplication26.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


void printMenu()
{
    cout << "s - report machine status" << endl;
    cout << "d - drop in a quarter" << endl;
    cout << "1 - pull the 1st knob" << endl;
    cout << "2 - pull the 2nd knob" << endl;
    cout << "3 - pull the 3rd knob" << endl;
    cout << "4 - pull the 4th knob" << endl;
    cout << "r - restock the machine" << endl;
    cout << "q - quit" << endl;
}

char getResponse()
{
    char response;
    bool done = false;
    while (!done)
    {
        cin >> response;
        if (response == 's' || response == 'd' || response == '1' || response == '2' || response == '3' || response == '4' || response == 'r' || response == 'q')
            done = true;
        if (!done)
            cout << "I do not understand." << endl;
    }
    return response;
}




int main()
{
    int luckystrikes = 5;
    int camels = 7;
    int gauloises = 1;
    int pallmalls = 6;
    int quarters = 0;
    float totalquarters = 0;
    float totalmoney = 24.50;
    char response = 'z';

    while (response != 'q')
    {
        printMenu();
        getResponse(); C:\Users\bknud\OneDrive\Computer Science 1400

            if (response == 'q')
            {
                cout << "So long!" << endl;
            }
        if (response == 's')
        {
            cout << luckystrikes << " packs of Lucky Strikes" << endl;
            cout << camels << " packs of Camels" << endl;
            cout << gauloises << " packs of Gauloises" << endl;
            cout << pallmalls << " packs of Pall Malls" << endl;
            cout << "You have " << totalquarters << " to spend" << endl;
            cout << "There is " << totalmoney << " in the machine" << endl;
        }
        if (response == 'd')
        {
            totalquarters++;
        }
        if (response == '1')
        {
            if (totalquarters >= 3 && luckystrikes > 0)
                cout << "A pack of Lucky Strikes slides into view. It's your lucky day!" << endl;
            else if (totalquarters < 3)
                cout << "(nothing happens)" << endl;
            else if (luckystrikes < 0)
                totalquarters = 0;
            totalmoney = totalmoney + (totalquarters * 0.25);
            cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
        }
        if (response == '2')
        {
            if (totalquarters >= 3 && camels > 0)
                cout << "A pack of Camels slides into view. Watch out, they spit!" << endl;
            else if (totalquarters < 3)
                cout << "(nothing happens)" << endl;
            else if (camels < 0)
                totalquarters = 0;
            totalmoney = totalmoney + (totalquarters * 0.25);
            cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
        }
        if (response == '3')
        {
            if (totalquarters >= 3 && gauloises > 0)
                cout << "A pack of Gauloises slides into view. Gauloises. Really?" << endl;
            else if (totalquarters < 3)
                cout << "(nothing happens)" << endl;
            else if (gauloises < 0)
                totalquarters = 0;
            totalmoney = totalmoney + (totalquarters * 0.25);
            cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
        }
        if (response == '4')
        {
            if (totalquarters >= 3 && pallmalls > 0)
                cout << "A pack of Pall Malls slides into view. They rhyme!" << endl;
            else if (totalquarters < 3)
                cout << "(nothing happens)" << endl;
            else if (pallmalls < 0)
                totalquarters = 0;
            totalmoney = totalmoney + (totalquarters * 0.25);
            cout << "You hear mechanical clanking, but no cigarettes appear." << endl;
        }
        if (response == 'r')
        {
            int luckystrikes = 10;
            int camels = 10;
            int gauloises = 10;
            int pallmalls = 10;
            int quarters = 0;
            float totalquarters = 0;
            float totalmoney = 0;
            cout << "A grouchy-looking attendant shows up and restocks the machine." << endl;
        }




    }

    return 0;
}
