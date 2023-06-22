#include "../include/token.h"

Token token_init(TokenType type, char * value, unsigned long start) {
	
	Token token = {type, value, start};
	return token;
}