#include <iostream>
#include <vector>

using namespace std;

int main(){
    char c = 0;
    vector<string> words;
    string word = "";
    bool isNewLine = true;

    while((c = getchar()) != EOF){
        if (c == ' ' || c == '\n'){
            if (!word.empty()) {
                words.insert(words.begin(), word);
                word = "";
            }
            if (c == '\n'){
                if (!words.empty()) {
                    for(int i = 0; i < words.size()-1; i++){
                        cout << words.at(i) << " ";
                    }
                    cout << words.at(words.size() -1) << endl;
                    words.clear();
                }
                else if (isNewLine) {
                    cout << endl;
                }
                isNewLine = true;
            }
            else {
                isNewLine = false;
            }
        }
        else {
            word += c;
            isNewLine = false;
        }
    }

    if (!word.empty()) {
        words.insert(words.begin(), word);
    }
    if (!words.empty()) {
        for(int i = 0; i < words.size()-1; i++){
            cout << words.at(i) << " ";
        }
        cout << words.at(words.size() -1) << endl;
    }
}