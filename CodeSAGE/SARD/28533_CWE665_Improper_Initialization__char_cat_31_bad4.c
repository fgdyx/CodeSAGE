#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 /* FLAW: Do not initialize data */
 ;
 {
 char * VAR4 = VAR2;
 char * VAR2 = VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: If data is not initialized properly, strcat() may not function correctly */
 strcat(VAR2, VAR5);
 FUN2(VAR2);
 }
 }
}
#endif
