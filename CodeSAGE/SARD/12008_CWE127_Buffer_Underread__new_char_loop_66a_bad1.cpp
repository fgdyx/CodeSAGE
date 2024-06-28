#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 VAR3 = NULL;
 {
 char * VAR4 = new char[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR3 = VAR4 - 8;
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
