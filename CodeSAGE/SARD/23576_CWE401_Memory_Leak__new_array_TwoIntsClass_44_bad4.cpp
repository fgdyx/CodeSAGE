#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: No deallocation */
 ;
}
void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2[100];
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN3(VAR3[0].VAR6);
 FUN3(VAR3[0].VAR7);
 FUN4(VAR3);
}
#endif
