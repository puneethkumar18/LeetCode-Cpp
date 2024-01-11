class Solution {
public:
    string interpret(string command) {
        for(int i=0;i < command.size();i++){
            if(command.substr(i,2) == "()"){
                command.replace(i,2,"o");
            }else if(command.at(i) == '('){
                command.replace(i,4,"al");
            }
        }
        return command;
    }
};