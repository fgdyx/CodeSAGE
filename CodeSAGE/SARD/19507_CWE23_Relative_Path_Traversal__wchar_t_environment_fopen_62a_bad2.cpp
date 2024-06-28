#ifndef VAR1
void FUN1(wchar_t * &VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 VAR6 *VAR7 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR7 = FUN3(VAR2, VAR8"");
 if (VAR7 != NULL)
 {
 fclose(VAR7);
 }
 }
}
#endif
