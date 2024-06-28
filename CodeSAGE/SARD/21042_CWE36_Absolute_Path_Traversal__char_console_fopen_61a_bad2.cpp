#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 VAR5 *VAR6 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR6 = FUN3(VAR2, "");
 if (VAR6 != NULL)
 {
 fclose(VAR6);
 }
 }
}
#endif
