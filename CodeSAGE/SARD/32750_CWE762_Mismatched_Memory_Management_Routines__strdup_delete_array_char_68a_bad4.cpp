#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = strdup(VAR3);
 }
 VAR4 = VAR2;
 FUN1();
}
#endif
