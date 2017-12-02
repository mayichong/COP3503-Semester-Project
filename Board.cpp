//******************************************************************************
// Board.cpp
// Revision History:
//
// Date           Author               Description
// 11/28/2017     Jason Chen           Added class
//******************************************************************************

#include <iostream>
#include "Deck.h"
#include "Hand.h"
#include "Card.h"
#include "Board.h"
#include "Player.h"
#include "ConsoleUI.h"
using namespace std;

//constructor
//initialize the board for a new game
Board::Board(Player* hum, Player* AI)
{
	human = hum;
	this->AI=AI;
	setCommunity();
}

void Board::setBlind(int bld)
{
	blind = bld;
}

void Board::setCommunity()
{
	for(int i = 0; i < 5; i++)
	{
		community[i] = dek.draw();
	}
}

void Board::printBoard()
{
	cout << "The pot is: " << pot << endl;
	cout << "Your stack size is: " << human->getTotalChips() << endl;
	cout << "AI's stack size is: " << "Print AI's stack size" << endl << endl;
}

void Board::preflop()
{
	printBoard();
	ConsoleUI* ui=new ConsoleUI();
	string inputTemp;
	cout << endl << "Your hand: " << "Print Player One's hand" <<endl;
	if(true) //player facing a bet
	{
		inputTemp=ui->input("Fold (1), Check (2), or Bet (3)");

		//switch cases depending on user's choice
	}
	else //player not facing a bet
	{
		cout << "Check or Bet" << endl;
		//user input
	}
	//update pot
	//update player's stack
	//update AI's stack
	printBoard();
}

void Board::flop()
{
	printBoard();
	cout << "The flop is " << endl;
	community[0].printCard();
	community[1].printCard();
	community[2].printCard();
	cout << endl << "Your hand: " << "Print Player One's hand" <<endl;
	if(true) //player facing a bet
	{
		cout << "Fold, Check, or Bet" << endl;
		//user input
	}
	else //player not facing a bet
	{
		cout << "Check or Bet" << endl;
		//user input
	}
	//update pot
	//update player's stack
	printBoard();

}

void Board::turn()
{
	printBoard();
	cout << "The turn is " << endl;
	community[0].printCard();
	community[1].printCard();
	community[2].printCard();
	community[3].printCard();
	cout << endl << "Your hand: " << "Print Player One's hand" <<endl;
	if(true) //player facing a bet
	{
		cout << "Fold, Check, or Bet" << endl;
		//user input
	}
	else //player not facing a bet
	{
		cout << "Check or Bet" << endl;
		//user input
	}
	//update pot
	//update player's stack
	printBoard();

}

void Board::river()
{
	printBoard();
	cout << "The flop is " << endl;
	community[0].printCard();
	community[1].printCard();
	community[2].printCard();
	community[3].printCard();
	community[4].printCard();
	cout << endl << "Your hand: " << "Print Player One's hand" <<endl;
	if(true) //player facing a bet
	{
		cout << "Fold, Check, or Bet" << endl;
		//user input
	}
	else //player not facing a bret
	{
		cout << "Check or Bet" << endl;
		//user input
	}
	//update pot
	//update player's stack
	printBoard();

}

void Board::clearBoard()
{
	dek.shuffle();
	setCommunity();
}
