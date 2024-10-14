#include<iostream>
#include<vector>
#include<cstdlib>

class Parrot {
    private:
    std::string word;
    std::vector<std::string> wordList;
    int numWords;

    public:
    //zadanie 1

    void say() {
        std::cout << "Aaaa\n";
    }
    //zadanie 2

    void say2() {
        std::cout << word << '\n';
    }
    //zadanie 3 

    //change the value of variable 'word'
    void changeWord(std::string newWord) {
        this->word = newWord;
    }
    //zadanie 4

    void repeat(int n) {
        //say the word n times
        for (int i = 0; i < n; i++) std::cout << word << '\n';
    }

    //zadanie 5

    //add new word to the list
    void addWord(std::string newWord) {
        wordList.push_back(newWord);
        numWords++;
    }
    //say a random word from the list
    void sayRandom() {
        std::cout << wordList[rand()%numWords+0] << '\n';
    }

    Parrot() {
        this->word = "";
        this->numWords = 0;
    }
    Parrot(std::string text) {
        this->word = text;
        this->numWords = 0;
    }
};

int main() {
    int n;
    std::string text;

    //create test object
    Parrot parrot("Oooo");

    //test methods
    parrot.say();
    parrot.say2();

    std::cin >> text;
    parrot.changeWord(text);

    std::cin >> n;
    parrot.repeat(n);

    std::cin >> text;
    parrot.addWord(text);
    std::cin >> text;
    parrot.addWord(text);

    parrot.sayRandom();
}
