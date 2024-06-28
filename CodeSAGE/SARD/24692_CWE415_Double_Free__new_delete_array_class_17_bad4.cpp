#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR5 = new VAR4[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR5;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR5;
 }
}
#endif
