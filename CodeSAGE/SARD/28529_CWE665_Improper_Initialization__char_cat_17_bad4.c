#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[100];
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Do not initialize data */
 ;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: If data is not initialized properly, strcat() may not function correctly */
 strcat(VAR3, VAR5);
 FUN2(VAR3);
 }
}
#endif
