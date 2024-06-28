#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR5 = (VAR4 *)malloc(100*sizeof(VAR4));
 VAR5[0].VAR6 = 0;
 VAR5[0].VAR7 = 0;
 FUN2(&VAR5[0]);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
