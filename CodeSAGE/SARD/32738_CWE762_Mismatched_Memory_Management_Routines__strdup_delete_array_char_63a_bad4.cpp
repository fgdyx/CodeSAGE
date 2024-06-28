#ifndef VAR1
void FUN1(char * * VAR2);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 {
 char VAR4[] = "";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = strdup(VAR4);
 }
 FUN1(&VAR3);
}
#endif
