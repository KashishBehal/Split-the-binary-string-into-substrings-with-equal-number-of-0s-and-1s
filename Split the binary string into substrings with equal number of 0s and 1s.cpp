class Solution {
public:
    int maxSubStr(string str){
        
        int o=0;
        int z=0;
        int count=0;
       for(int i=0;i<str.length();i++){
           if(str[i]=='0'){
               z++;
           }
           if(str[i]=='1'){
               o++;
           }
           if(z==o){
               count++;
           }
           
       }
       if(z!=o){
           return -1;
       }
       return count;
    }
};
