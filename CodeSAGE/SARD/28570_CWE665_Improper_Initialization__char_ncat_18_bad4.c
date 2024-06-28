#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 /* FLAW: Do not initialize data */
 ;
 {
 size_t VAR5;
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR5 = strlen(VAR4);
 /* POTENTIAL FLAW: If data is not initialized properly, strncat() may not function correctly */
 strncat(VAR2, VAR4, VAR5);
 FUN2(VAR2);
 }
}
#endif
