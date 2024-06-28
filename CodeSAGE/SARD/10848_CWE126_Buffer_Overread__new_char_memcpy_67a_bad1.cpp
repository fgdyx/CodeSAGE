#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 char * VAR3;
 structType VAR2;
 VAR3 = NULL;
 /* FLAW: Use a small buffer */
 VAR3 = new char[50];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
