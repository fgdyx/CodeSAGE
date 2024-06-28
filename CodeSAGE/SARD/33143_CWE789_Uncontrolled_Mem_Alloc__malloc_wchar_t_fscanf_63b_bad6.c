#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 size_t VAR4 = *VAR3;
 {
 wchar_t * VAR5;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR4 > wcslen(VAR6))
 {
 VAR5 = (wchar_t *)malloc(VAR4*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
