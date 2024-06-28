#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
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
 {
 char * VAR5;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN3(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
