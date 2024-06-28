#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
 }
}
#endif
