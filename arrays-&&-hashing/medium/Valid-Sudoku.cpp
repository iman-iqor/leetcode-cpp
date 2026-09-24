#include<vector>
#include<iostream>
#include<algorithm>
#include<set>


class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        
        for(int i = 0;i<9;i++)
        {
            int startRow=(i/3)*3;
            int startColumn=(i%3)*3;
            std::set<int> seen;
            for(int m = startRow;m < startRow+3;m++)
            {
                for(int n=startColumn;n <startColumn+3 ;n++)
                {
                    if(board[m][n]=='.' )
                        continue;
                    if(seen.find(board[m][n])!= seen.end())
                    {
                        return false;
                    }
                    seen.insert(board[m][n]);
                }
            }
            
            std::set<char> rows;
            for(int j=0;j <9;j++)
            {
                if(board[i][j]=='.' )
                    continue;
                if(rows.find(board[i][j]) != rows.end())
                {
                    return false;
                }
                // std::cout<<board[i][j]<<",";
                rows.insert(board[i][j]);
            }
            std::set<char> columns;
            for(int j=0;j <board.size();j++)
            {
                if(board[j][i]=='.' )
                    continue;
                if(columns.find(board[j][i]) != columns.end())
                {
                    std::cout<<"this is the probleme: "<<board[j][i]<<std::endl;
                    return false;
                }
                // std::cout<<"i"<<i<<"j"<<j<<board[j][i]<<",";
                columns.insert(board[j][i]);
            }
            
            // std::cout<<std::endl;
        }

        
        return true;
    }
};





int main()
{
    std::vector<std::vector<char>> v = { { '.', '.', '4', '.', '5', '.', '.', '1', '.' }, 
                                        { '.', '4', '.', '3', '.', '.', '.', '.', '.' },
                                        { '.', '.', '.', '.', '.', '3', '.', '.', '1' },
                                        { '8', '.', '.', '.', '.', '.', '.', '2', '.' },
                                        { '.', '.', '2', '.', '7', '.', '.', '.', '.' },
                                        { '.', '1', '5', '.', '.', '.', '.', '.', '.' },
                                        { '.', '.', '.', '.', '.', '2', '.', '.', '.' },
                                        { '.', '2', '.', '9', '.', '.', '.', '.', '.' },
                                        { '.', '.', '4', '.', '.', '.', '.', '.', '.' } };

        Solution s;
    std::cout<<"the return value: "<<s.isValidSudoku(v)<<std::endl;
}