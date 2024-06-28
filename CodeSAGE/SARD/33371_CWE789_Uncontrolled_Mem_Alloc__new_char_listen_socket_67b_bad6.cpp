#ifndef VAR1
void FUN1(structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 char * VAR5;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR3 > strlen(VAR6))
 {
 VAR5 = new char[VAR3];
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
