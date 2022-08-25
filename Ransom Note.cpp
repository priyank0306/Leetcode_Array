class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26]={0};
        for(int i=0; i<ransomNote.size(); i++)
        {
            count[ransomNote[i]-'a']++;
        }
        for(int i=0; i<magazine.size(); i++)
        {
            count[magazine[i]-'a']--;
        }
        for(int i=0;i<26; i++)
        {
            if(count[i]>0)return false;
        }
        return true;
    }
};