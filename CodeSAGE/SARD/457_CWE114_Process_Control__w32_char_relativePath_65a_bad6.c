#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[100] = "";
 VAR2 = VAR5;
 /* FLAW: Specify just the file name for the library, not the full path */
 strcpy(VAR2, "");
 FUN3(VAR2);
}
#endif
