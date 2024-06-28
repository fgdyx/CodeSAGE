#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: No deallocation */
 ;
}
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2[100];
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 FUN1(VAR3);
}
#endif
