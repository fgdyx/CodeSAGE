#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0;
 {
 size_t VAR2 = *VAR4;
 {
 char VAR6[VAR7] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = FUN2(VAR6, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 *VAR4 = VAR2;
 }
 {
 size_t VAR2 = *VAR5;
 {
 char * VAR8;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > strlen(VAR9))
 {
 VAR8 = new char[VAR2];
 strcpy(VAR8, VAR9);
 FUN3(VAR8);
 delete [] VAR8;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
