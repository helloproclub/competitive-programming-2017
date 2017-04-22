#include <iostream>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int hardness = 0; int cons_consonant = 0; int cons_vowel = 0;
        int status = 0; // 0 == vowel, 1 == consonant;

        string word;
        cin >> word;
        int counter = 0;
        for(char &c : word) {

            // vowel condition
            if (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') {
                cons_vowel++;

                // if last word status different
                if (counter != 0) {
                    if (status == 1) {
                        if (cons_consonant >= 2) {
                            hardness += cons_consonant - 1;
                        }
                        cons_consonant = 0;
                    }
                }

                status = 0;

            } else {
                // consonant condition
                cons_consonant++;

                if (counter != 0) {
                    // if last word status different
                    if (status == 0) {
                        if (cons_vowel >= 3) {
                            hardness += cons_vowel - 2;
                        }
                        cons_vowel = 0;
                    }
                }
                status = 1;
            }

            counter++;
        } // end loop word

        // end check
        if (cons_consonant >= 2) {
            hardness += cons_consonant - 1;
        }
        if (cons_vowel >= 3) {
            hardness += cons_vowel - 2;
        }

        // output case;
        if(hardness == 0){
            cout << "Case #" << i + 1 << ": EASY\n";
        } else {
            cout << "Case #" << i + 1 << ": " << hardness << "\n";
        }

    }
    return 0;
}
