//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include "Token.h"

Token::Token()
{
/*
    setLeftChild(NULL);
    setRightChild(NULL);
    list = NULL;
*/
}
Token::~Token()
{
/*
    LineNumberList *root = getLineNumberList();
    LineNumberList *tmp = root;
    
    while (root != NULL)
    {
        tmp = tmp->getNextLineNumber();
        delete root;
        root = tmp;
    }
    if (this->getType() == STRING_LIT)
    {
        free(this->literal.stringLiteral);
    }
*/
}
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
TokenCode Token::getCode()
{
    return this->code;
}
/*
void Token::setType(LiteralType newType)
{
    this->type = newType;
}
LiteralType Token::getType()
{
    return this->type;
}
void Token::setLiteral(int newInteger)
{
    this->literal.integer = newInteger;
}
int Token::getIntLiteral()
{
    return this->literal.integer;
}
void Token::setLiteral(float newReal)
{
    this->literal.real = newReal;
}
float Token::getRealLiteral()
{
    return this->literal.real;
}
void Token::setLiteral(string newString)
{
    this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
    strcpy(this->literal.stringLiteral, newString.c_str());
}
string Token::getStringLiteral()
{
    return string(this->literal.stringLiteral);
}
*/
void Token::setTokenString(string s)
{
    this->tokenString = s;
}
string Token::getTokenString()
{
    return this->tokenString;
}
void Token::print()
{
    char line[MAX_SOURCE_LINE_LENGTH + 32];
	const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

	sprintf(line, "    >> %-16s %s\n", symbol_string, this->getTokenString().c_str());
	printf("%s", line);  //s stored as c_str and printed
}
/*
//What methods am I missing to implement a binary tree.
void Token::setLeftChild(Token *tok)
{
    this->leftChild = tok;
}
Token *Token::getLeftChild()
{
    return this->leftChild;
}
void Token::setRightChild(Token *tok)
{
    this->rightChild = tok;
}
Token *Token::getRightChild()
{
    return this->rightChild;
}
void Token::addToLineNumberList(LineNumberList *listItem)
{
    LineNumberList *tmp = getLineNumberList();
    
    if (tmp == NULL)
    {
        list = listItem;
    }
    else
    {
        while (tmp->getNextLineNumber() != NULL)
        {
            tmp = tmp->getNextLineNumber();
        }
        tmp->setNextLineNumber(listItem);
    }
}
LineNumberList *Token::getLineNumberList()
{
    return this->list;
}
*/
