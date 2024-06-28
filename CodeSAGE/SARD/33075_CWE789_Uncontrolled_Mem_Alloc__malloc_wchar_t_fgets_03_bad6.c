#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(5==5)
 {
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(5==5)
 {
 {
 wchar_t * VAR5;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > wcslen(VAR6))
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN4(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
