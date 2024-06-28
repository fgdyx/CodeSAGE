#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR2;
 }
 else
 {
 VAR2 = new char[100];
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR2;
 }
 else
 {
 ;
 }
}
#endif
