{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
         int count[26]={0};
         if(a.size()!= b.size())
            return false;
         for(int i=0; i<a.size(); i++){
	        count[a[i]-'a']++;
	        count[b[i]-'a']--;
	          }
	    for(int i=0; i<26; i++){
	        if(count[i]>0){
	           return false;
	        }
	    }
        return true;
    }

};
