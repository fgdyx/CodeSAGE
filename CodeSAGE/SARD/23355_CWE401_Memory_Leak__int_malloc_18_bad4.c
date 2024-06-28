#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (int *)malloc(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
