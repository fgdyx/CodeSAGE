#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3==5)
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
 if(VAR3==5)
 {
 {
 char * VAR6;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > strlen(VAR7))
 {
 VAR6 = new char[VAR2];
 strcpy(VAR6, VAR7);
 FUN3(VAR6);
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
