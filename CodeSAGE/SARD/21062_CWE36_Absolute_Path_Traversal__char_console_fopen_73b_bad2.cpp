#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 VAR5 *VAR6 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR6 = FUN3(VAR4, "");
 if (VAR6 != NULL)
 {
 fclose(VAR6);
 }
 }
}
#endif
