#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(FUN2())
 {
 VAR3 = new VAR2;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR3;
 }
 else
 {
 VAR3 = new VAR2;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR3;
 }
 else
 {
 ;
 }
}
#endif
