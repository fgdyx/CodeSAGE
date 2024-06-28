#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (struct VAR2 *)calloc(100, sizeof(struct VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN2((VAR6 *)&VAR3[0]);
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 break;
 }
}
#endif
