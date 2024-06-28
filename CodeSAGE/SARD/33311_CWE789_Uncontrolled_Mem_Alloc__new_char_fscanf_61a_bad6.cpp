#ifndef VAR1
VAR2 FUN1(size_t VAR3);
void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 VAR3 = FUN1(VAR3);
 {
 char * VAR4;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR3 > strlen(VAR5))
 {
 VAR4 = new char[VAR3];
 strcpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
