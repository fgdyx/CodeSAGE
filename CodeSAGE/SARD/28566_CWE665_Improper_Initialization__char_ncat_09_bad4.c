#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(VAR4)
 {
 /* FLAW: Do not initialize data */
 ;
 }
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
#endif
