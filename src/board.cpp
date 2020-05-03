#include "board.h"

static int numDigits(int num)
{
    int digits = 0;
    while(num != 0) {
        digits++;
        num /= 10;
    }
    return digits;
}

void Board::showBoard() const
{
    int maxNumDigits = numDigits(m_dimension*m_dimension);

    system("cls");
    int count = 1;
    for(int i = 0; i < m_dimension; ++i)
    {
        for(int j = 0; j < m_dimension; j++)
        {
            std::cout << "   ";
            for(int k = 0; k < (maxNumDigits - 1); k++) std::cout << " ";
            if(j != m_dimension - 1) std::cout << "|";
        }
        std::cout << std::endl;
        for(int j = 0; j < m_dimension; j++)
        {
            std::cout << " ";
            if(m_board[i][j] == 0) std::cout << count;
            else std::cout << m_board[i][j];

            for(int k = 0; k < (maxNumDigits - (m_board[i][j] == 0 ? numDigits(count) : 1)); k++) std::cout << " ";

            std::cout << " ";
            count++;
            if(j != m_dimension - 1) std::cout << "|";
        }
        std::cout << std::endl;
        if(i != m_dimension - 1)
        {
            for(int j = 0; j < m_dimension*3 + (m_dimension-1) + m_dimension*(maxNumDigits - 1); j++)
            {
                if((j+1) % (4 + (maxNumDigits - 1)) == 0) std::cout << "|";
                else std::cout << "_";
            }
        }
        else
        {
            for(int j = 0; j < m_dimension; j++)
            {
                std::cout << "   ";
                for(int k = 0; k < (maxNumDigits - 1); k++) std::cout << " ";
                if(j != m_dimension - 1) std::cout << "|";
            }
        }
        std::cout << std::endl;
    }
}
