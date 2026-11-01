class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int y = 0;
        for(int i=0;i<n;i++){
            if(operations[i]=="--X"){
                y--;
            }else if(operations[i]=="X--"){
                y--;
            }else if(operations[i]=="++X"){
                y++;
            }else{
                y++;
            }
        }
        return y;
    }
};