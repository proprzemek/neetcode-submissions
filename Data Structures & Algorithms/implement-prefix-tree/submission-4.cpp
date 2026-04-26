class PrefixTree {
public:
    unordered_map<string, bool> pre;
    unordered_map<string, bool> words;

    PrefixTree() {
        
    }
    
    void insert(string word) {
        string res = "";
        for (int i = 0; i < word.size(); ++i) {
            res.push_back(word[i]);
            pre[res] = true;
        }
        words[word] = true;
    }
    
    bool search(string word) {
        return words.count(word);
    }
    
    bool startsWith(string prefix) {
        return pre.count(prefix);
    }
};