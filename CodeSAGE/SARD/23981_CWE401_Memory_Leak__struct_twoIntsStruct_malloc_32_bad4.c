#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3;
 struct VAR2 * *VAR4 = &VAR3;
 struct VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 struct VAR2 * VAR3 = *VAR4;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR6 = 0;
 VAR3[0].VAR7 = 0;
 FUN2((VAR8 *)&VAR3[0]);
 *VAR4 = VAR3;
 }
 {
 struct VAR2 * VAR3 = *VAR5;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
