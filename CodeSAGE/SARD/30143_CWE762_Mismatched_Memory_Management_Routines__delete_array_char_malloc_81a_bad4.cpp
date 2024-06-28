#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (char *)malloc(100*sizeof(char));
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
