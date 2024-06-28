#ifndef VAR1
void FUN1(size_t VAR2)
{
 {
 char * VAR3;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
