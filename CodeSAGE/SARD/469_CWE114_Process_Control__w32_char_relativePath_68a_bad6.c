#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 /* FLAW: Specify just the file name for the library, not the full path */
 strcpy(VAR2, "");
 VAR4 = VAR2;
 FUN1();
}
#endif
