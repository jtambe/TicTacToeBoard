/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, blankBoard)
{
	bool checker = true;
	TicTacToeBoard b;
	b.clearBoard();
	for(int i = 0; i < 3 ; i++ )
	{
		for (int j = 0; j < 3;j++)
		{
			if (b.getPiece(i,j) != Blank)
			{
				checker = false;	
			}
		}
	}
	ASSERT_TRUE(checker);
}


TEST(TicTacToeBoardTest, getWinner)
{
	bool checker = true;
	TicTacToeBoard b;
	b.clearBoard();
	b.getWinner();
	ASSERT_FALSE(b.getWinner() == Invalid);

}


TEST(TicTacToeBoardTest, placePieceatInvalidPlace)
{
	TicTacToeBoard b;	
	//b.placePiece(4,5);
	ASSERT_TRUE(b.placePiece(4,5) == Invalid);

}

TEST(TicTacToeBoardTest, placePieceAtZeroZero)
{
	TicTacToeBoard b;	
	//b.placePiece(4,5);
	ASSERT_TRUE(b.placePiece(0,0) == X);
	

}


TEST(TicTacToeBoardTest, placeSecondPieceAtZeroZero)
{
	TicTacToeBoard b;	
	b.placePiece(0,0);
	ASSERT_TRUE(b.placePiece(0,0) == X);


}


TEST(TicTacToeBoardTest, getPiece)
{
	TicTacToeBoard b;	
	b.clearBoard();
	ASSERT_TRUE(b.getPiece(4,4) == Invalid);

}
