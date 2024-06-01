#include <iostream>
#include <windows.h>
using namespace std;

void askQuestion(string &choice, string arr1[], string arr2[], string arr3[])
{
    int count = 0;
    for (int i = 0; i < 20; i++)
    {
        cout << "Question " << i + 1 << ":" << endl;
        cout << arr1[i] << endl;
        cout << arr2[i] << endl;
        cout << "Your answer (a, b, c, or d): ";
        cin >> choice;
        if (choice != arr3[i])
        {
          	cout<<"Wrong! "<<endl;
          	cout<<endl;
        }
        else
        {
            cout << "Correct!" << endl;
            cout<<endl;
            count=count+1;
            
        }
    }
    cout << "You answered " << count << " questions correctly out of 20." << endl;
}

int main()
{
    char play_again;
    string choice;  
    string Question[20] = {"What is the capital of France?", "In which year did World War II end?", "What is the largest planet in our solar system?", "Who wrote 'Romeo and Juliet'?", "What is the capital of Japan?", "Which ocean is the largest?", "What is the currency of Australia?", "Who was the first President of the United States?", "What is the main ingredient in guacamole?", "In which year did the Titanic sink?", "What is the largest mammal on Earth?", "Who painted the Mona Lisa?", "What is the national flower of Japan?", "Which planet is known as the 'Red Planet'?", "What is the largest desert in the world?", "Who wrote 'To Kill a Mockingbird'?", "What is the capital of Canada?", "Which element has the chemical symbol 'H'?", "What is the largest organ in the body?", "Which famous scientist developed the theory of relativity?"};
    string Answers[20] = {" a. Berlin\n b. Madrid\n c. Paris\n d. Rome\n", " a. 1943\n b. 1945\n c. 1946\n d. 1950\n", " a. Venus\n b. Mars\n c. Jupiter\n d. Saturn\n", " a. Charles Dickens\n b. William Shakespeare\n c. Jane Austen\n d. Mark Twain\n", " a. Beijing\n b. Seoul\n c. Tokyo\n d. Bangkok\n", " a. Indian Ocean\n b. Atlantic Ocean\n c. Pacific Ocean\n d. Artic Ocean\n ", " a. Euro\n b. Dollar\n c. Australian Dollar\n d. Peso\n", " a. Thomas Jefferson\n b. George Washington\n c. Abraham Lincoln\n d. John Adams\n", " a. Tomatoes\n b. Onions\n c. Avocado\n d. Peppers\n", " a. 1910\n b. 1912\n c. 1915\n d. 1920\n", " a. Elephant\n b. Blue Whale\n c. Giraffe\n d. Polar Bear\n", " a. Vincent Van Gogh\n b. Leonardo da Vinci\n c. Pablo Picasso\n d. Claude Monet\n", " a. Rose\n b. Tulip\n c. Cherry Blossom\n d. Orchid\n", " a. Jupiter\n b. Venus\n c. Saturn\n d. Mars\n", " a. Sahara Desert\n b. Gobi Desert\n c. Arabian Desert\n d. Antarctic Desert\n", " a. J.K. Rowling\n b. Ernest Hemingway\n c. Harper Lee\n d. F. Scott Fitzgerald\n", " a. Ottawa\n b. Toronto\n c. Quebec\n d. Montreal\n", " a. Hydrogen\n b. Helium\n c. Carbon\n d. Oxygen\n", " a. Heart\n b. Liver\n c. Skin\n d. Lungs\n", " a. Isaac Newton\n b. Galileo Galilei\n c. Albert Einstein\n d. Stephen Hawking\n"};
    string Correct_Ans[20] = {"c", "c", "c", "c", "c", "c", "c", "b", "c", "b", "b", "b", "c", "d", "d", "c", "a", "a", "c", "c"};

    do
    {
        askQuestion(choice, Question, Answers, Correct_Ans);
        Sleep(5000);
        cout << "Do you want to play again? (y/n): ";
        cin >> play_again;
    } while (play_again != 'n');

    return 0;
}

