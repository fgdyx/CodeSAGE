#ifndef VAR1
int VAR2 = 0;
void FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR3 = new char[100];
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
