#ifndef VAR1
void FUN1(char * &VAR2)
{
 /* FLAW: Specify just the file name for the library, not the full path */
 strcpy(VAR2, "");
}
#endif
