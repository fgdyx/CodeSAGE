#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new struct VAR2;
 VAR3->VAR5 = 0;
 VAR3->VAR6 = 0;
 FUN2((VAR7 *)VAR3);
 }
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
