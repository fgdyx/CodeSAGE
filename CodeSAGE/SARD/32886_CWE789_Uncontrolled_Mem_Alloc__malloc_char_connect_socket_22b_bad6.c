#ifndef VAR1
extern int VAR2;
void FUN1(size_t VAR3)
{
 if(VAR2)
 {
 {
 char * VAR4;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR3 > strlen(VAR5))
 {
 VAR4 = (char *)malloc(VAR3*sizeof(char));
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 free(VAR4);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
#endif
