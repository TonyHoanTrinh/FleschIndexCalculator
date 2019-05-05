#include <stdio.h>

int vowelCheck(char);
int whitespaceCheck(char);
int indexCalculate();
int punctuationCheck(char);
textInfo readFile(FIlE * );

typedef struct
{
  int words;
  int syllables;
  int sentences;
  double fleschIndex;
} textInfo;

int main()
{
    textInfo userFile;

    userFile = readFile(stdin);

    printf("Flesch Index = %d\n", userFile.fleschIndex);
    printf("Syllable Count = %d\n", userFile.syllables);
    printf("Word Count = %d\n", userFile.words);
    printf("Sentence Count = %d\n", userFile.sentences);


    return 0;
}

int vowelCheck(char a)
{
    if (a == "A" || a == "a" ||
        a == "E" || a == "e" ||
        a == "I" || a == "i" ||
        a == "O" || a == "o" ||
        a == "U" || a == "u" ||
        a == "Y" || a == "y")
        {
            return 1;
        }
    return 0;
}

int whitespaceCheck(char a)
{
    if (a == " "  ||
        a == "\t" ||
        a == "\n" ||
        a == "\r" ||)
    {
        return 1;
    }
    return 0;
}

double indexCalculate(textInfo analyzedText)
{
  double index;
  index = 206.835 - 84.6 * ((double) analyzedText.syllables / (double) analyzedText.words) -
    1.015 * ((double) analyzedText.words / (double) analyzedText.sentences);
}

int punctuationCheck(char a)
{
    if (a == "." ||
        a == "?" ||
        a == "!" ||
        a == "," ||
        a == ";")
    {
        return 1;
    }
    return 0;

}

textInfo readFile (FILE * f)
{
    textInfo analyzedText;
    analyzedText.words = 0;
    analyzedText.syllables = 0;
    analyzedText.sentences = 0;
    analyzedText.index = 0;

    char currentPosition;
    while(!feof(f))
    {
        currentPosition = fgetc(f);
        if (// Check if we have a complete word)
        {
          {

          }
        }

        if(// Check if the chracter is a vowel or not)
        {
            if(// Check if the characters ahead are vowels as well)
            {

            }

        }
        else if (// Check if the character is a space or not)
        {
            if(// Check if the character before the current character is a letter)
            {

            }
        }
        else if (// Check if the character is punctuation or not)
        {


        }
        else (// This means that the current character is a consonant)
        {

        }

    }

    analyzedText.fleschIndex = indexCalculate(analyzedText);

    return analyzedText;
}
