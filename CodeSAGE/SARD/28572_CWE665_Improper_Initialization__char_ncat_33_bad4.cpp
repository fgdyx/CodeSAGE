#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 char VAR4[100];
 VAR2 = VAR4;
 /* FLAW: Do not initialize data */
 ;
 {
 char * VAR2 = VAR3;
 {
 size_t VAR5;
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 VAR5 = strlen(VAR6);
 /* POTENTIAL FLAW: If data is not initialized properly, strncat() may not function correctly */
 strncat(VAR2, VAR6, VAR5);
 FUN2(VAR2);
 }
 }
}
#endif
