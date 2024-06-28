#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 /* FLAW: Do not initialize data */
 ;
 FUN1(VAR2);
}
#endif
