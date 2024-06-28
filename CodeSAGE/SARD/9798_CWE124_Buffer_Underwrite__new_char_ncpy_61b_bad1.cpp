#ifndef VAR1
char * FUN1(char * VAR2)
{
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 return VAR2;
}
#endif
