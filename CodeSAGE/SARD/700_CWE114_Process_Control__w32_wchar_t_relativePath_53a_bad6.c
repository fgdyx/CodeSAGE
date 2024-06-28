#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 /* FLAW: Specify just the file name for the library, not the full path */
 wcscpy(VAR2, VAR4"");
 FUN1(VAR2);
}
#endif
