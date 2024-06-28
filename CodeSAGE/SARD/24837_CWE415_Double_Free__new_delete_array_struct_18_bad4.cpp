#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 goto VAR4;
VAR4:
 VAR3 = new VAR2[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR3;
 goto VAR5;
VAR5:
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR3;
}
#endif
