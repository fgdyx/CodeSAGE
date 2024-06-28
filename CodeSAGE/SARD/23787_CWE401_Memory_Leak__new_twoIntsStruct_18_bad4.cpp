#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2(VAR3);
 goto VAR7;
VAR7:
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
