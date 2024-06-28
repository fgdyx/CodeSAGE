#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new char[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR2;
 }
 if(1)
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR2;
 }
}
#endif
