#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0;
 {
 size_t VAR2 = *VAR4;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = rand();
 *VAR4 = VAR2;
 }
 {
 size_t VAR2 = *VAR5;
 {
 char * VAR6;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > strlen(VAR7))
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
#endif
