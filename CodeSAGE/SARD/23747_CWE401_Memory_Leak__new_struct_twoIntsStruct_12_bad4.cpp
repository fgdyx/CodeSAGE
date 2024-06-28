#ifndef VAR1
void FUN1()
{
 struct VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new struct VAR2;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN3((VAR6 *)VAR3);
 }
 else
 {
 struct _twoIntsStruct VAR7;
 VAR3 = &VAR7;
 VAR3->VAR4 = 0;
 VAR3->VAR5 = 0;
 FUN3((VAR6 *)VAR3);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
 else
 {
 delete VAR3;
 }
}
#endif
