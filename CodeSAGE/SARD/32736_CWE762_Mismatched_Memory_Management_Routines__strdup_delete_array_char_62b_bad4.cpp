#ifndef VAR1
void FUN1(char * &VAR2)
{
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = strdup(VAR3);
 }
}
#endif
