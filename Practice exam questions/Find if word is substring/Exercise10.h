#ifndef EXERCISE10
#define EXERCISE10

bool doExist(char* symbols, char* word) {
    if (!symbols || !word) {
        return false;
    }

    while (*symbols) {
        char* tempSymbols = symbols;
        char* tempWord = word;

        while (*tempSymbols && *tempWord && *tempSymbols == *tempWord) {
            tempSymbols++;
            tempWord++;
        }

        if (!*tempWord) {
            return true;
        }

        symbols++;
    }

    return false;
}

#endif // !EXERCISE10
