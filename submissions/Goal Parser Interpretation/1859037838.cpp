# Title: Goal Parser Interpretation
# Submission ID: 1859037838
# Status: Accepted
# Date: 18 December 2025 at 09:00:28 pm IST

class Solution {
public:
bool checko(string command,int i){
   int k = i;
        if(command[k]=='(' && command[k+1]==')'){
            return true;
        
    }
    return false;
}
bool checkal(string command,int i){
    int k = i;
        if(command[k]=='('&&command[k+1]=='a'&&command[k+2]=='l'&&command[k+3]==')'){
            return true;
        }
        return false;
    
}
    string interpret(string command) {
       string g = "G";
       
      
       vector<char>result;
       for(int i = 0;i<command.size();i++){
        if(command[i]=='G'){
            result.push_back('G');
        }else if(checko(command,i)==true){
            result.push_back('o');
            i++;
        }
        else if(checkal(command,i)==true){
            result.push_back('a');
            result.push_back('l');
            i+=3;
        }
       }
      
      string jam = "";
      for(int i = 0;i<result.size();i++){
        jam.push_back(result[i]);
      }
      return jam;

    }
};