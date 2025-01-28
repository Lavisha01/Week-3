#include <iostream>
#include <string>
using namespace std;

int main() {
    string action, with_me;
    cout << "To read the complete story, be with us till the end. Type Proceed: " << endl;
    cin >> action;

    if (action == "Proceed" || action == "proceed") {
        cout << "It was the day I was returning from Gulab Bagh, and due to some reason, I got confused about which street to take to reach Udiya Pole. I took the first street out of familiarity (construction was going on at the corner) and found myself on a very secluded street in front of an ancient-looking gate." << endl;
        cout << "Are you with me? Type yes or no: " << endl;
        cin >> with_me;

        if (with_me == "yes") {
            cout << "The gate looked new as if it had not seen any traffic pollution. The streets were not crowded, unlike the usual scene at Udiya Pole and Gulab Bagh road. I thought extensively about whether I was on the wrong path. Without asking anyone or using Google Maps, I took a U-turn and returned towards Gulab Bagh to find my way home." << endl;
            cout << "After strolling through the streets three to four times and stubbornly insisting on finding the Udiya Pole route, I finally opened Maps for the third time. Feeling lost (yes, it's hard for me to ask for help, and it's tough to trust that there are genuine people willing to help me), I decided to trust Maps once again." << endl;
            cout << "Are you still with me? Type yes or no: " << endl;
            cin >> with_me;

            if (with_me == "yes") {
                cout << "Still feeling confused and hesitant, I thought, okay, why not trust Google Maps one more time? It guided me back to the ancient gate and suggested continuing the path beyond it. Trusting Maps, I didn't stop at the gate but crossed it as the guide suggested." << endl;
                cout << "\nSurprise!\n\nThis was the way home! The gate was unfamiliar, but it led to the path that took me home. Since that day, the gate has become my landmark to check if I'm on the right path." << endl;
            } else {
                cout << "Alright, I see you're not following along. Goodbye!" << endl;
                return 0;
            }
        } else {
            cout << "Alright, I see you're not following along. Goodbye!" << endl;
            return 0;
        }
    } else {
        cout << "You chose not to proceed. Goodbye!" << endl;
        return 0;
    }

    cout << "\n Do you want to know why I shared this incident, which clearly shows I'm bad with routes until they are familiar to me? Type yes or no: " << endl;
    cin >> with_me;

    if (with_me == "yes") {
        cout << "It's because this incident not only shows my way back home from Gulab Bagh but also symbolizes my way back to coding. In my first year, coding felt unfamiliar, unrecognizable, and unfathomable. I was afraid of its newness and took a detour, searching for an easier path." << endl;
        cout << "But my guide and my stubbornness brought me back to coding. While feeling confused and afraid, I chose to look and move beyond the gate, only to find my way back home. \n \n Thank you Papa for believing in me and making me believe nothing is tough for me if i put in the efforts, I because of you am not afraid of coding now. Days are when i feel like giving up but remembering why I started brings me back to path. Remember guys, it is just unfamiliar not unfathomable. \n \n Thank you for being with me throughout the story, see you tomorrow with a real topic and learning." << endl;
    } else {
        cout << "What are you even here for anyway?" << endl;
    }

    return 0;
}
