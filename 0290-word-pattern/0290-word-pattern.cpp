class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // Parse the string into individual words
        istringstream stringStream(s);
        vector<string> words;
        string word;
        while (stringStream >> word) {
            words.push_back(word);
        }
      
        // Check if pattern length matches number of words
        if (pattern.size() != words.size()) {
            return false;
        }
      
        // Create bidirectional mappings
        unordered_map<char, string> charToWord;  // Maps pattern character to word
        unordered_map<string, char> wordToChar;  // Maps word to pattern character
      
        // Iterate through pattern and words simultaneously
        for (int i = 0; i < words.size(); ++i) {
            char currentChar = pattern[i];
            string currentWord = words[i];
          
        
                if ((charToWord.count(currentChar) && charToWord[currentChar] != currentWord) || 
                    (wordToChar.count(currentWord) && wordToChar[currentWord] != currentChar)) {
                    return false;
                }
          
            
            charToWord[currentChar] = currentWord;
            wordToChar[currentWord] = currentChar;
        }
      
        return true;
    }
};
