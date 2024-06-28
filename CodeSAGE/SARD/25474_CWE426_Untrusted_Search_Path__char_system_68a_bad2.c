#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR4);
 VAR5 = VAR2;
 FUN1();
}
#endif
