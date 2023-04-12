//Задачи на строки
//1.(8) Составить алгоритм, исключающий из строки А символы строки Б.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string strA, strB, strC;
    cout << "Enter string A: ";
    getline(cin, strA);
    cout << "Enter string B: ";
    getline(cin, strB);

    for (char c : strA) {
        if (strB.find(c) == string::npos) {
            strC += c;
        }
    }

    cout << "Result: " << strC << endl;

    return 0;
}








//2.(12) Составить алгоритм, заменяющий в тексте слова “правда” на “ложь”.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string text, newText;
    cout << "Enter text: ";
    getline(cin, text);

    vector<string> words;
    string word;
    for (char c : text) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        }
        else {
            word += c;
        }
    }
    words.push_back(word);
    for (int i = 0; i < words.size(); i++) {
        if (words[i] == "правда") {
            newText += "ложь";
        }
        else {
            newText += words[i];
        }
        if (i != words.size() - 1) {
            newText += " ";
        }
    }
    cout << "New text: " << newText << endl;
    return 0;
}



//3.(21)
std::string digitToString(const char digit)
{
    switch (digit)
    {
    case '0': return "ноль";
    case '1': return "один";
    case '2': return "два";
    case '3': return "три";
    case '4': return "четыре";
    case '5': return "пять";
    case '6': return "шесть";
    case '7': return "семь";
    case '8': return "восемь";
    case '9': return "девять";
    default: return "";
    }


  //  4(17)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

        using namespace std;

    bool compare(string a, string b) {
        return a.length() < b.length();
    }

    int main() {
        vector<string> strings = { "apple", "banana", "orange", "pear", "grape" };

        sort(strings.begin(), strings.end(), compare);

        for (string s : strings) {
            cout << s << endl;
        }
        return 0;
    }