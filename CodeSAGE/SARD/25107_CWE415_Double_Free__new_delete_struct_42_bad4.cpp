#ifndef VAR1
static VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = new VAR2;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR3;
 return VAR3;
}
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR3;
}
#endif
