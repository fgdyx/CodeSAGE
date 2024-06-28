#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 VAR3 *VAR4 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4 = FUN2(VAR2, VAR5"");
 if (VAR4 != NULL)
 {
 fclose(VAR4);
 }
 }
}
#endif
