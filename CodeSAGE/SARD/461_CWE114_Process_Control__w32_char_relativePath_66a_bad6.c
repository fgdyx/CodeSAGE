#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char VAR4[100] = "";
 VAR3 = VAR4;
 /* FLAW: Specify just the file name for the library, not the full path */
 strcpy(VAR3, "");
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
