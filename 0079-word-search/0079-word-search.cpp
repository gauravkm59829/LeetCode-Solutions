class Solution {
public:
    bool wordSearch(vector<vector<char>>& board, string word, int i, int j, int k){
        if(word.length() == k)
          return true;
        
        
        if(i < 0 || i > board.size() - 1 || j < 0 || j > board[i].size() - 1 || board[i][j] != word[k]) return false;
        
        board[i][j] = '0';
        bool next = wordSearch(board, word, i + 1, j, k + 1) ||  wordSearch(board, word, i, j + 1, k + 1) ||             wordSearch(board, word, i - 1, j, k + 1) ||  wordSearch(board, word, i, j - 1, k + 1);
        board[i][j] = word[k];
        return next;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(word.length() == 0) return false;
        for(int i = 0;i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == word[0] && wordSearch(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};