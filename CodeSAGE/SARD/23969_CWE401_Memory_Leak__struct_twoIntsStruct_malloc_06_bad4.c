#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 }
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
