#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN2(VAR3[0]);
 }
 if(VAR4)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
