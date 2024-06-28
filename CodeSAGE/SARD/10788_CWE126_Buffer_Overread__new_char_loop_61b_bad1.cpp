#ifndef VAR1
char * FUN1(char * VAR2)
{
 /* FLAW: Use a small buffer */
 VAR2 = new char[50];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 return VAR2;
}
#endif
