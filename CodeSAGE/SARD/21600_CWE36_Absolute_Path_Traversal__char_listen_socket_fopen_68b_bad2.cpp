#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 VAR4 *VAR5 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5 = FUN2(VAR2, "");
 if (VAR5 != NULL)
 {
 fclose(VAR5);
 }
 }
}
#endif
