#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new int[100];
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 FUN1(VAR2);
}
#endif
