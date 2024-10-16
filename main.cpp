#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::cin;

typedef struct card {
    string suit;
    string value;
} card;

std::vector<card> create_deck() {
    std::vector<card> deck;
    string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string value[13] = { "2" , "3", "4", "5", "6", "7", "8", "9","10", "Jack","Queen","King", "Ace"};

    for (int i = 0; i < 4; i++) {  // Iterate over suits
        for (int j = 0; j < 13; j++) {  // Iterate over values
            card c = {suits[i], value[j]};
            deck.push_back(c);
        }
    }
    return deck;
}

std::vector<card> create_hand(std::vector<card> &deck) {
    std::vector<card> hand;
    for (int i = 0; i < deck.size(); ++i) {
        //  add code to remove from deck to disperse cards to hand
        return hand;
    }
}

int main() {
    //  Initialise deck
    std::vector<card> deck = create_deck();

    // print the deck
    for (const auto& c : deck) {
        cout << c.value << " of " << c.suit << "\n";
    }



    return 0;
}
