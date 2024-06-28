#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 {
 VAR5 *VAR6 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR6 = FUN2(VAR4, VAR7"");
 if (VAR6 != NULL)
 {
 fclose(VAR6);
 }
 }
}
#endif
