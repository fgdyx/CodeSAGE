#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR2 * *VAR4 = &VAR3;
 VAR2 * *VAR5 = &VAR3;
 VAR3 = NULL;
 {
 VAR2 * VAR3 = *VAR4;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new VAR2;
 VAR3->VAR6 = 0;
 VAR3->VAR7 = 0;
 FUN2(VAR3->VAR6);
 FUN2(VAR3->VAR7);
 *VAR4 = VAR3;
 }
 {
 VAR2 * VAR3 = *VAR5;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
