#ifndef VAR1
void FUN1(char * * VAR2);
void FUN2()
{
 char * VAR3;
 char VAR4[100] = "";
 VAR3 = VAR4;
 /* FLAW: Use a hardcoded password */
 strcpy(VAR3, VAR5);
 FUN1(&VAR3);
}
#endif
