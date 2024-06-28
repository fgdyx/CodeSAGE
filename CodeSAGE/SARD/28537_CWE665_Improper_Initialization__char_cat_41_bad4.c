#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 /* POTENTIAL FLAW: If data is not initialized properly, strcat() may not function correctly */
 strcat(VAR2, VAR3);
 FUN2(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char VAR4[100];
 VAR2 = VAR4;
 /* FLAW: Do not initialize data */
 ;
 FUN1(VAR2);
}
#endif
