#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char VAR3[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = strdup(VAR3);
 FUN3(VAR2);
 }
 VAR4 = VAR2;
 FUN1();
}
#endif
