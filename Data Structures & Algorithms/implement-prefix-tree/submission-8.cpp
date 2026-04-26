class TrieNode {
public:
    TrieNode* dzieci[26];
    bool czyKoniecSlowa;

    TrieNode() {
        czyKoniecSlowa = false;
        for (int i = 0; i < 26; i++) {
            dzieci[i] = nullptr;
        }
    }
};

class PrefixTree {
private:
    TrieNode* root;

public:
    PrefixTree() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* obecny = root;
        
        for (char litera : word) {
            int indeks = litera - 'a';
            
            if (obecny->dzieci[indeks] == nullptr) {
                obecny->dzieci[indeks] = new TrieNode();
            }
            
            obecny = obecny->dzieci[indeks];
        }
        obecny->czyKoniecSlowa = true;
    }
    
    bool search(string word) {
        TrieNode* obecny = root;
        
        for (char litera : word) {
            int indeks = litera - 'a';
            
            if (obecny->dzieci[indeks] == nullptr) {
                return false;
            }
            obecny = obecny->dzieci[indeks];
        }
        
        return obecny->czyKoniecSlowa;
    }
    
    bool startsWith(string prefix) {
        TrieNode* obecny = root;
        
        for (char litera : prefix) {
            int indeks = litera - 'a';
            
            if (obecny->dzieci[indeks] == nullptr) {
                return false;
            }
            obecny = obecny->dzieci[indeks];
        }
        
        return true; 
    }
};