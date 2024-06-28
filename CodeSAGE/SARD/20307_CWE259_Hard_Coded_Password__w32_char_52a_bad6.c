#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 /* FLAW: Use a hardcoded password */
 strcpy(VAR2, VAR4);
 FUN1(VAR2);
}
#endif
