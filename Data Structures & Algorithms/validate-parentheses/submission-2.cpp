class Solution {
public:
    bool isValid(string s) {
        stack<char> stos;

        for(char znak : s){
            if(znak == '(' || znak == '[' || znak == '{'){
                stos.push(znak);
            }
            else{
                if(stos.empty()){
                    return false;
                }

                char szczyt = stos.top();

                if ((znak == ')' && szczyt == '(') ||
                (znak == ']' && szczyt == '[') ||
                (znak == '}' && szczyt == '{')){
                    stos.pop();
                }
                else{
                    return false;
                }

            }
        }
        return stos.empty();
    }
};
