#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: If data is not initialized properly, strcat() may not function correctly */
 strcat(VAR3, VAR4);
 FUN2(VAR3);
 }
}
#endif
