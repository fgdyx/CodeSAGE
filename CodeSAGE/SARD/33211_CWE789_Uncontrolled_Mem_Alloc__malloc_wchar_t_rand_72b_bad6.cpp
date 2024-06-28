#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4)
{
 size_t VAR5 = VAR4[2];
 {
 wchar_t * VAR6;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR5 > wcslen(VAR7))
 {
 VAR6 = (wchar_t *)malloc(VAR5*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
