#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new int[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR2;
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR2;
 }
}
#endif
