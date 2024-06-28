#ifndef VAR1
static char * FUN1(char * VAR2)
{
 /* FLAW: Do not initialize data */
 ;
 return VAR2;
}
void FUN2()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 /* POTENTIAL FLAW: If data is not initialized properly, strcat() may not function correctly */
 strcat(VAR2, VAR4);
 FUN3(VAR2);
 }
}
#endif
