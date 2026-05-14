class Solution {
public:

   string encode(vector<string>& strs) {
    string encoded = "";

    for(string &s : strs){ //means take everything in string strs 
        encoded += to_string(s.length()) + "#" + s;
    }

    return encoded;
} 
    

   
        vector<string> decode(string s) {
    vector<string> res;
    int i = 0;

    while(i < s.length()){
        int j = i;

        while(s[j] != '#'){
            j++;
        }

        int length = stoi(s.substr(i, j - i));

        string word = s.substr(j + 1, length);

        res.push_back(word);

        i = j + 1 + length;
    }

    return res;
        }

    
};
