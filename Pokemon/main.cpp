#include <iostream>
using namespace std;

int main() {
    int choice;
    string initialNarration = R"(Welcome, brave adventurer!
    You find yourself standing in front of a massive, ancient castle.
    The walls are cracked with age,
    and the doors creak as they slowly open in front of you.
    Inside, there are many rooms, each more mysterious than the last.
    Some may hold treasures beyond imagination,
    while others may hide dangers lurking in the shadows.
    )";
    
    string missionObjective = R"(Mission Objective:
    Your goal is simple, yet perilous—choose a room!
    Once inside, who knows what you may find?
    Will it be riches, knowledge, or something… more sinister?
    It’s all up to the room you pick.
    )";

    cout << initialNarration;
    cout << missionObjective;

    cout << "Please choose your room by entering (1, 2, 3):\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "A room full of gold coins! You can retire now, you lucky soul!\n";
            break;
        case 2:
            cout << "A library of ancient books! You gain immense knowledge, but beware… some knowledge comes with a price.\n";
            break;
        case 3:
            cout << "A sleeping dragon! You barely escape with your life. Perhaps next time, choose more wisely...\n";
            break;
        default:
            cout << "A secret passage to the dungeon! Beware, danger lies ahead in the dark corridors.\n";
    }

    return 0;
}
