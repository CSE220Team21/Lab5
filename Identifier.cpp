/*==============================================================*/
/*	Mike Mayr (MMayr15), Chalie Crow (LevenBravo)		*/
/*	Team 21							*/
/*	https://github.com/CSE220Team21/Lab5			*/
/*	Identifier.cpp						*/
/*==============================================================*/

#include "Identifier.h"

Identifier::Identifier(): Token(){
	this->setCode(IDENTIFIER);
    setRightChild(NULL);
    setLeftChild(NULL);
    list = NULL;
    }
Identifier::~Identifier(){
    LineNumberList *root = getLineNumberList();
    LineNumberList *tmp = root;
    while (root != NULL){
        tmp = tmp->getNextLineNumber();
        delete root;
        root = tmp;
        }
    }
/*====================================================================================*/
void Identifier::setRightChild(Identifier *tok){
    this->rightChild = tok;
    }
Identifier *Identifier::getRightChild(){
    return this->rightChild;
    }
/*====================================================================================*/
void Identifier::setLeftChild(Identifier *tok){
    this->leftChild = tok;
    }
Identifier *Identifier::getLeftChild(){
    return this->leftChild;
    }
/*====================================================================================*/
void Identifier::addToLineNumberList(LineNumberList *listItem)
{
    LineNumberList *tmp = getLineNumberList();
    if (tmp == NULL){
        list = listItem;
      }
    else{
      while (tmp->getNextLineNumber() != NULL){
        tmp = tmp->getNextLineNumber();
        }
        tmp->setNextLineNumber(listItem);
        }
      }
LineNumberList *Identifier::getLineNumberList(){
    return this->list;
    }
/*====================================================================================*/
void Identifier::print(){
    char line[MAX_SOURCE_LINE_LENGTH + 32];
    const char *symbol_string = SYMBOL_STRINGS[this->getCode()];
    sprintf(line,"    >> %-16s %-s\n",symbol_string,this->getTokenString().c_str());
    printf("%s",line);
    }
