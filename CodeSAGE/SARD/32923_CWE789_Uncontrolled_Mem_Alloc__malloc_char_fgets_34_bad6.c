#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 CWE789_Uncontrolled_Mem_Alloc__malloc_char_fgets_34_unionType VAR3;
 VAR2 = 0;
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
 VAR3.VAR6 = VAR2;
 {
 size_t VAR2 = VAR3.VAR7;
 {
 char * VAR8;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > strlen(VAR9))
 {
 VAR8 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR8, VAR9);
 FUN3(VAR8);
 free(VAR8);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
