class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(string s:strs){
            res+=to_string(s.length());
            res+='#';
            res.append(s);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        int n=s.length();
        while(i<n){
            int hashPos = s.find('#', i);
            int num = stoi(s.substr(i, hashPos - i));
            ans.push_back(s.substr(hashPos + 1, num));
            i = hashPos + 1 + num;
        }
        return ans;
    }
};
