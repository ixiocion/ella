#ifndef TOKEN_H
#define TOKEN_H

typedef enum TOKEN_TYPE {
	
	TT_OP_ADD,
	TT_OP_SUB,
	TT_OP_MUL,
	TT_OP_DIV,

	TT_ASS_EQ,

	TT_CMP_LTHAN,
	TT_CMP_GTHAN,
	TT_CMP_EQUAL,
	TT_CMP_NOTEQ,

	TT_CMN_LPAREN,
	TT_CMN_RPAREN,
	TT_CMN_LBRACK,
	TT_CMN_RBRACK,
	TT_CMN_LCURL,
	TT_CMN_RCURL,
	TT_CMN_DOT,
	TT_CMN_COMMA,
	TT_CMN_COLON,
	
	TT_KW_T_BOOL,
	TT_KW_T_INT,
	TT_KW_T_LONG,
	TT_KW_T_FLOAT,
	TT_KW_T_REAL,
	TT_KW_T_CHAR,
	TT_KW_T_STRING,
	TT_KW_T_CLASS,
	TT_KW_T_JSON,
	TT_KW_T_ARRAY,
	TT_KW_T_MAP,
	TT_KW_T_OBJECT,
	TT_KW_T_CONST,

	TT_ID_VAR,
	TT_ID_FUN,
	TT_ID_CLASS,
	TT_ID_CONST,

	TT_VL_INT_DEC,
	TT_VL_INT_HEX,
	TT_VL_INT_OCT,
	TT_VL_INT_BIN,
	TT_VL_FLOAT,
	TT_VL_CHAR,
	TT_VL_STRING
} TokenType;

typedef struct TOKEN {
	
	TokenType type;
	char * value;
	unsigned long start;
} Token;

Token token_init(TokenType type, char * value, unsigned long position);

#endif