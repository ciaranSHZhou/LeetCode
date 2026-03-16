class Codec {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded;

        for (auto str : strs){
            encoded.append(to_string(str.size()));
            encoded.append("/:");
            encoded.append(str);
        }

        return encoded;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        size_t i = 0;

        while(i < s.size()){
            size_t delim_pos = s.find("/:", i);
            int length = stoi(s.substr(i, delim_pos - i));

            res.push_back(s.substr(delim_pos + 2, length));

            i = delim_pos + 2 + length;
        }
        
        return res;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));