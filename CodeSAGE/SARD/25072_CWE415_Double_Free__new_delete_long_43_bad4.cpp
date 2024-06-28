#ifndef VAR1
void FUN1(long * &VAR2)
{
 VAR2 = new long;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
}
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
}
#endif
