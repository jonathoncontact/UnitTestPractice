#include "Password.h"
#include <string>

using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/



int Password::count_leading_characters(string phrase) {
    if (phrase.empty()) return 0;

    int repetition = 1;
    while (repetition < phrase.length() &&
           phrase[repetition] == phrase[0]) {
        repetition++;
    }
    return repetition;
}


/*
  receives a string and returns whether it has both at least one upper-case
  letter and at least one lower-case letter
*/
bool Password::has_mixed_case(string pass) {
  bool upper = false;
  bool lower = false;

  for (unsigned char character : pass) {
    if (std::isupper(character)) {
      upper = true;
    }

    if (std::islower(character)) {
      lower = true;
    }

    if (upper && lower) {
      return true;
    }
  }

  return false;
}