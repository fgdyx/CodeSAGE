#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 const VAR3& VAR4 = FUN3();
 VAR4.FUN4(VAR2);
}
#endif
