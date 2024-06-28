#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(FUN2())
 {
 /* FLAW: Do not initialize data */
 ;
 }
 else
 {
 VAR2[0] = '';
 }
 {
 size_t VAR4;
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR4 = strlen(VAR5);
 /* POTENTIAL FLAW: If data is not initialized properly, strncat() may not function correctly */
 strncat(VAR2, VAR5, VAR4);
 FUN3(VAR2);
 }
}
#endif
