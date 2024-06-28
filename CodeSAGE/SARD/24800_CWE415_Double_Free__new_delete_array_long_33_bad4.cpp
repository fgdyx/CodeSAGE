#ifndef VAR1
void FUN1()
{
 long * VAR2;
 long * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new long[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR2;
 {
 long * VAR2 = VAR3;
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR2;
 }
}
#endif
