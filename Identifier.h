/*==============================================================*/
/*	Mike Mayr (MMayr15), Chalie Crow (LevenBravo)		*/
/*	Team 21							*/
/*	https://github.com/CSE220Team21/Lab5			*/
/*	Identifier.h						*/
/*==============================================================*/

#ifndef IDENTIFIER_H_
#define IDENTIFIER_H_

#include "Token.h"

class Identifier : public Token
{
public:
	Identifier();
	~Identifier();
	
  void setRightChild(Identifier *tok);
  Identifier *getRightChild();
	void setLeftChild(Identifier *tok);
  Identifier *getLeftChild();
  void addToLineNumberList(LineNumberList *listItem);
  LineNumberList *getLineNumberList();
  void print();

private:
    Identifier *rightChild;
    Identifier *leftChild;
    LineNumberList *list;
};

#endif
