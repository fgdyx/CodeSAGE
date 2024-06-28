#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2(&VAR3[0]);
 {
 VAR2 * VAR6 = VAR3;
 VAR2 * VAR3 = VAR6;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
