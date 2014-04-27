/*==============================================================*/
/*	Mike Mayr (MMayr15), Chalie Crow (LevenBravo)		            */
/*	Team 21						                                        	*/
/*	https://github.com/CSE220Team21/Lab5		                  	*/
/*	Real.h					                                           	*/
/*==============================================================*/
#ifndef REAL_H_
#define REAL_H_
#include "Token.h"

class Real : public Token
{

	public:
		Real() : Token()
		{
			this->setCode(NUMBER);

		}
		~Real()
		{

		}
		void print()
		{
			char line[MAX_SOURCE_LINE_LENGTH + 32];
			const char *symbol_string = SYMBOL_STRINGS[this->getCode()];

			sprintf(line, "    >> %-16s %s (real)\n", symbol_string, this->getTokenString().c_str());
			printf("%s", line);
		}
};
