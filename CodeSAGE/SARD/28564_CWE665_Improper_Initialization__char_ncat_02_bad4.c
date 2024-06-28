#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(1)
 {
 /* FLAW: Do not initialize data */
 ;
 }
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = strlen(VAR5);
 /* POTENTIAL FLAW: If data is not initialized properly, strncat() may not function correctly */
 strncat(VAR2, VAR5, VAR4);
 FUN2(VAR2);
 }
}
#endif
