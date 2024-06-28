#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 size_t VAR4 = *VAR3;
 {
 char * VAR5;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR4 > strlen(VAR6))
 {
 VAR5 = (char *)malloc(VAR4*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
