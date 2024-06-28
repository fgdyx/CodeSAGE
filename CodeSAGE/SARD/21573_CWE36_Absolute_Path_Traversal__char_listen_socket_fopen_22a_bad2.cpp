#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 VAR6 *VAR7 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR7 = FUN3(VAR3, "");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
 ;
}
#endif
