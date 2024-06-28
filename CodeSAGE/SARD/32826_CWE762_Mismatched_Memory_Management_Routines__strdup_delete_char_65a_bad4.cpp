#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 VAR2 = NULL;
 {
 char VAR5[] = "";
 /* POTENTIAL FLAW: Allocate memory from the heap using a function that requires free() for deallocation */
 VAR2 = strdup(VAR5);
 }
 FUN3(VAR2);
}
#endif
