#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR3;
 {
 VAR2 * VAR4 = VAR3;
 VAR2 * VAR3 = VAR4;
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR3;
 }
}
#endif
