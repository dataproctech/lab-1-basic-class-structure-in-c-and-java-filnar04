import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.Scanner; 

public class Parrot {
    private String word;
    private List<String> wordList;
    private int numWords;

    //zadanie 1

    public void say() {
        System.out.println("Aaaa\n");
    }
    //zadanie 2

    public void say2() {
        System.out.println(word);
    }
    //zadanie 3 

    //change the value of variable 'word'
    public void changeWord(String newWord) {
        this.word = newWord;
    }
    //zadanie 4

    public void repeat(int n) {
        //say the word n times
        for (int i = 0; i < n; i++) System.out.println(word);
    }

    //zadanie 5

    //add new word to the list
    public void addWord(String newWord) {
        wordList.add(newWord);
        numWords++;
    }
    //say a random word from the list
    public void sayRandom() {
        Random rand = new Random();
        System.out.println(wordList.get(rand.nextInt(numWords)));
    }

    public Parrot() {
        this.word = "";
        this.numWords = 0;
        this.wordList = new ArrayList<String>();
    }
    public Parrot(String text) {
        this.word = text;
        this.numWords = 0;
        this.wordList = new ArrayList<String>();
    }
    public static void main(String args[]) {
        //create test object
        Parrot parrot = new Parrot("Oooo");
        int n;
        String text;
        //test methods
        parrot.say();
        parrot.say2();

        Scanner reader = new Scanner(System.in);
        text = reader.nextLine();
        
        parrot.changeWord(text);

        n = reader.nextInt();
        parrot.repeat(n);

        for (int i = 0; i < 3; i++) {
            text = reader.nextLine();
            parrot.addWord(text);
        }

        parrot.sayRandom();
    }
};
