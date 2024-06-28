#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2[100];
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 goto VAR5;
VAR5:
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
