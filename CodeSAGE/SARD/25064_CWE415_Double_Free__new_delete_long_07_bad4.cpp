#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new long;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
 }
}
#endif
