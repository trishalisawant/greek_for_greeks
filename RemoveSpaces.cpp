class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string result ="";
        for(char ch:s)
        {
            if(ch!=' ')
            {
               result+=ch; 
            }
        }
        return result;
    }
};
