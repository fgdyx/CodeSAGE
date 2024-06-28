#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = rand();
 {
 size_t VAR2 = VAR4;
 {
 char * VAR5;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = new char[VAR2];
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
}
#endif
