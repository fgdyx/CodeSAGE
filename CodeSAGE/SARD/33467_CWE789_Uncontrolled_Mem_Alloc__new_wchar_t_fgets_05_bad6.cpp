#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR3)
 {
 {
 wchar_t * VAR6;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > wcslen(VAR7))
 {
 VAR6 = new wchar_t[VAR2];
 wcscpy(VAR6, VAR7);
 FUN4(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
