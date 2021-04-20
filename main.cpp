#include <iostream>
#include <stdlib.h>

using namespace std;
int main() {
    cout <<" ________________________________ \n";
    cout <<"|     chapter 1: Hello, world    | \n";
    cout <<"| After a long time freezed, you | \n";
    cout <<"|wake up in 2077, after a incide-| \n";
    cout <<"|nt that happened in 2021 on the | \n";
    cout <<"|power plant you worked, but you | \n";
    cout <<"|feel your body numb... you real-| \n";
    cout <<"|ise that you're fallen in the g-| \n";
    cout <<"|round and various scientists are| \n";
    cout <<"|around you, but you don't rem-  | \n";
    cout <<"|ember why.                      | \n";
    cout <<"|________________________________|  \n";


    string charName;
    cout <<"What is your name? \n";
    cin >>charName;

    cout <<" ______________________________________________ \n";
    cout <<"|Scientist: Calm down, you were just recovered | \n";
    cout <<"|from a long time frozen, there's a possibility|\n";
    cout <<"|of being knocked out, let me help you up.     | \n";
    cout <<"|The scientist helps you up, then gives you a b| \n";
    cout <<"|lanket.                                       | \n";
    cout <<"|______________________________________________| \n";

    int choice;
    cout <<"Choose a question:  \n";
    cout <<"3) Where am i? \n";
    cout <<"2) Who are you? \n";
    cout <<"1) Who am i? \n";
    
    cin >>choice;
    
    if (choice == 1) {
        cout <<"________________________________________________ \n";
        cout <<"|Scientist: It's common that you don't remember| \n";
        cout <<"|somethings for now, but we will do a brain su-| \n";
        cout <<"|rgery which will make you remember everuthing.| \n";
        cout <<"|______________________________________________| \n";
    }
    else {
        cout <<"Invalid command. \n";
    }
    cout <<" ______________________________________________ \n";
    cout <<"|Scientist: Calm down, you were just recovered | \n";
    cout <<"|from a long time frozen, there's a possibility|\n";
    cout <<"|of being knocked out, let me help you up.     | \n";
    cout <<"|The scientist helps you up, then gives you a b| \n";
    cout <<"|lanket.                                       | \n";
    cout <<"|______________________________________________| \n";

    int choice1;
    cout <<"Choose a question:  \n";
    cout <<"3) Where am i? \n";
    cout <<"2) Who are you? \n";
    cout <<"1) Who am i? \n";
    cin >>choice1;

    if (choice1 == 2) {
        cout <<"_______________________________________________ \n";
        cout <<"|Scientist: I'm a scientist here from the hosp-| \n";
        cout <<"|ital, my name is Jhorge Antônio, pleasure to m| \n";
        cout <<"|eet you.                                      |\n";
        cout <<"|______________________________________________| \n";
        int answer_3;
        cout <<"Answers: \n";
        cout <<"1) Weird name \n";
        cin >>answer_3;
        if (answer_3 == 1) {
            cout <<"______________________________________________ \n";
            cout <<"|Scientist: Hah, i know.                     | \n";
            cout <<"|____________________________________________| \n";

        }
    }
        
        else {
            cout <<"Invalid command. \n";
        }
        
        cout <<" ______________________________________________ \n";
        cout <<"|Scientist: Calm down, you were just recovered | \n";
        cout <<"|from a long time frozen, there's a possibility|\n";
        cout <<"|of being knocked out, let me help you up.     | \n";
        cout <<"|The scientist helps you up, then gives you a b| \n";
        cout <<"|lanket.                                       | \n";
        cout <<"|______________________________________________| \n";

         int choice3;
        cout <<"Choose a question:  \n";
        cout <<"3) Where am i? \n";
        cout <<"2) Who are you? \n";
        cout <<"1) Who am i? \n";
        cin >>choice3;
        if (choice3 = 3) {
            cout <<"_____________________________________________\n";
            cout <<"|Scientist: You are currently in a hospital. | \n";
            cout <<"|____________________________________________| \n";
        }

        cout <<"______________________________________________________________ \n";
        cout <<"|You procceed to the brain surgery after some time, when you | \n";
        cout <<"|finish the surgery, it was like a long sleep, but the good n| \n";
        cout <<"|ews is that you recovered all your memories. But you notice | \n";
        cout <<"|something wrong, there are cybernetic parts around your body| \n";
        cout <<"|____________________________________________________________| \n";
        cout <<charName<<": Hey, what are these weird parts for? \n";
        cout <<"_____________________________________________________________ \n";
        cout <<"|Scientist: Those are cybernetic parts, they will help you on| \n";
        cout <<"|your daily routine.                                         |\n";
        cout <<"|____________________________________________________________| \n";
        cout <<charName<<": Since when those are around? \n";
        cout <<"_____________________________________________________________ \n";
        cout <<"|Scientist: I don't really remember, but somewhere around 203| \n";
        cout <<"|0                                                           | \n";
        cout <<"|____________________________________________________________| \n";

        cout <<"You can now check your character stats by typing '10' \n";
        int stats;
        cin >>stats;
        if (stats == 10) {
            cout <<charName<<endl;
            cout <<"ATK = 5 \n";
            cout <<"DEF = 7 \n";
            cout <<"AMR = 10 \n";

        }
    cout <<"_____________________________________________________________________________ \n";
    cout <<"|You walk out of the hospital and looks around, times have really changed...| \n";
    cout <<"|___________________________________________________________________________| \n";
    cout <<"DEMO ENDED.";


    cout <<"2.0.7.7 \n";

    cout <<"Credits \n";
    cout <<"Exit \n";
        return 0;
}
