class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row_size = board.size();
        int column_size = board[0].size();

        vector<unordered_set<int>> rows_seen(9, 0);
        vector<unordered_set<int>> column_seen(9, 0);
        vector<unordered_set<int>> box_seen(9, 0);
        for (int i = 0; i < row_size; i++) {
            for (int j = 0; j < column_size; j++) {
                int curr_ele = board[i][j];
                if (curr_ele == '.'){
                    continue ; 
                }
                if (rows_seen[i].find(curr_ele) == rows_seen[i].end()) {
                    rows_seen[i].insert(curr_ele);
                } else {
                    return false;
                }
                if (column_seen[j].find(curr_ele) == column_seen[j].end()) {
                    column_seen[j].insert(curr_ele);
                } else {
                    return false;
                }
                // next one is nothing but dividing i  by 3 ;
                // so that we know whether it is in the right grp and check for it

                int box_index = (i / 3) * 3 + (j / 3);

                if (box_seen[box_index].find(curr_ele) == box_seen[box_index].end()) {
                    box_seen[box_index].insert(curr_ele);

                } else {
                    return false;
                }
                return true ; 
            }
        }
    }
};
