#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = strdup(VAR3);
 }
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
#endif
