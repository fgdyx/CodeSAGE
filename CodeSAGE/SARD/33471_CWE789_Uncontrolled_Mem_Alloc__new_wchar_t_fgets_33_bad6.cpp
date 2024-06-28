#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN2(VAR5, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 {
 size_t VAR2 = VAR4;
 {
 wchar_t * VAR7;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > wcslen(VAR8))
 {
 VAR7 = new wchar_t[VAR2];
 wcscpy(VAR7, VAR8);
 FUN4(VAR7);
 delete [] VAR7;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
