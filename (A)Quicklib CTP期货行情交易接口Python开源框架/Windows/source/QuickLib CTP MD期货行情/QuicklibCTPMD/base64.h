#pragma once 

 #define DECODE_ERROR 0xffffffff 


 static char base64_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"; 


int CStringEncodeBase64(const CString &szInput, CString &szOutput);
 int CStringDecodeBase64(const CString &szInput, CString &szOutput); 
 int base64_encode(const void *data, const int size, char **str); 

static int pos(const char c); 

 

static unsigned int token_decode(const char *token); 

int base64_decode(const char *str, char *data); 