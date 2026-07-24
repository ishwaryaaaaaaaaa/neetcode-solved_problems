class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
   
        int row_size = board.size(); 
        int column_size= board[0].size(); 
        
        vector<unordered_set<int>>rows_seen(9,0); 
        vector<unordered_set<int>>column_seen(9,0); 
        for(int i = 0 ; i< row_size ; i++){
            for(int j = 0 ; j < column_size ; j++){
                int curr_ele = board[i][j];
                if(rows_seen[i].find(curr_ele != rows_seen[i].end())){
                    break; 
                }
                else if rows_seen[i].push_back(curr_ele);

                if(column_seen[j].find() != column_seen[j]){
                    break;
                }
                else if column_seen[j].push_back(curr_ele); 
 
                // next one is nothing but dividing it by 3 ; 
                
            }

        }
    }
};
