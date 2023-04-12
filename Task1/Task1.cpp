#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::map;

string modify(string text)
{
    string result = "";
    map<char, int> counts;
    for (int i = 0; i < text.length(); i++)
    {
        counts[std::tolower(text[i])]++;
    }
    for (int i = 0; i < text.length(); i++)
    {
        if (counts[std::tolower(text[i])] > 1)
        {
            result += ")";
        }
        else
        {
            result += "(";
        }
    }
    return result;
}

int main()
{
    cout << "Input: ";
    string text;
    std::getline(cin, text);
    cout << "Output: " << modify(text) << std::endl;
}



