#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 else
 {
 VAR3 = (VAR2 *)FUN4(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
 else
 {
 free(VAR3);
 }
}
#endif
