#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 const VAR3& VAR4 = FUN3();
 VAR4.FUN4(VAR2);
}
#endif
