#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 VAR3* VAR4 = new VAR5;
 VAR4->FUN3(VAR2);
 delete VAR4;
}
#endif
