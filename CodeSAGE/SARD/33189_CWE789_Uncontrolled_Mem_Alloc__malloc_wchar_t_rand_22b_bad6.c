#ifndef VAR1
extern int VAR2;
void FUN1(size_t VAR3)
{
 if(VAR2)
 {
 {
 wchar_t * VAR4;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR3 > wcslen(VAR5))
 {
 VAR4 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
