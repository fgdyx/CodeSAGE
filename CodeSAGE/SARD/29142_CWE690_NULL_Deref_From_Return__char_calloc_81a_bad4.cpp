#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (char *)calloc(20, sizeof(char));
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
