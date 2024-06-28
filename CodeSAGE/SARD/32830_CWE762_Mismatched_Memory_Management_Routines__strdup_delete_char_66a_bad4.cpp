#ifndef VAR1
void FUN1(char * VAR2[]);
void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 VAR3 = NULL;
 {
 char VAR4[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR3 = strdup(VAR4);
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
