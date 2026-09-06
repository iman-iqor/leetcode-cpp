#include <iostream>
#include <vector>
#include <map>

class Solution
{
public:
    bool isValidSudoku(std::vector<std::vector<char>> &board)
    {
        int i = 0;
        std::map<char, int> clmB;
        std::map<char, int> clmE;
        int clmTotalB = 0;
        int clmTotalE = 0;
        int totalB = 0;
        int totalE = 0;

        while (i < 9)
        {
            if (board[i][0] == '.')
                clmTotalB++;
            else
                clmB[board[i][0]]++;

            if (board[i][8] == '.')
                clmTotalE++;
            else
                clmE[board[i][8]]++;

            std::map<char, int> m;
            std::map<char, int> c;
            int point = 0;
            int pointC= 0;
            int total = 0;
            int totalC = 0;
            int j = 0;
            while (j < 9)
            {
                if (board[i][j] == '.')
                    point++;
                else
                    m[board[i][j]]++;

                if (board[j][i] == '.')
                    pointC++;
                else
                    c[board[j][i]]++;

                if (i % 3 == 0 && j % 3 == 0)
                {
                    int boxTotal = 0;
                    std::map<char, int> box;
                    int tmp = 0;
                    int k = i;
                    while (k < i + 3)
                    {
                        int o = j;
                        while (o < j + 3)
                        {
                            if (board[k][o] == '.')
                                boxTotal++;
                            else
                                box[board[k][o]]++;
                            o++;
                        }
                        k++;
                    }
                    tmp = box.size() + boxTotal;
                    if (tmp != 9)
                    {
                        // std::cout << "box" << std::endl;
                        return false;
                    }
                    
                }
                j++;
            }
            total = m.size() + point;

            if (total != 9)
            {
                // std::cout << "map not 9" << std::endl;
                return false;
            }
            total = c.size() + pointC;

            if (total != 9)
            {
                // std::cout << "map not 9" << std::endl;
                return false;
            }
            
            
            i++;
        }
        totalB = clmTotalB + clmB.size();
        totalE = clmTotalE + clmE.size();
        if (totalB != 9 || totalE != 9)
        {
            // std::cout<<"B or E"<<std::endl;
            return false;
        }
        return true;
    }
};

int main()
{
    std::vector<std::vector<char>> v = { { '.', '.', '4', '.', '.', '.', '6', '3', '.' }, 
                                        { '.', '.', '.', '.', '.', '.', '.', '.', '.' },
                                        { '5', '.', '.', '.', '.', '.', '.', '9', '.' },
                                        { '.', '.', '.', '5', '6', '.', '.', '.', '.' },
                                        { '4', '.', '3', '.', '.', '.', '.', '.', '1' },
                                        { '.', '.', '.', '7', '.', '.', '.', '.', '.' },
                                        { '.', '.', '.', '5', '.', '.', '.', '.', '.' },
                                        { '.', '.', '.', '.', '.', '.', '.', '.', '.' },
                                        { '.', '.', '.', '.', '.', '.', '.', '.', '.' } };

        Solution s;
    s.isValidSudoku(v);
}