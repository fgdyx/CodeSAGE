#ifndef VAR1
static void FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: No deallocation */
 ;
}
void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 FUN4(VAR2);
}
#endif
