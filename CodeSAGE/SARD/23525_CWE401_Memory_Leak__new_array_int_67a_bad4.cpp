#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 int * VAR3;
 structType VAR2;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new int[100];
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
