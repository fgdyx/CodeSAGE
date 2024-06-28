#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR4);
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR2);
}
#endif
