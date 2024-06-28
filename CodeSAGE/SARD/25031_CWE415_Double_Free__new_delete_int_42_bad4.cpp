#ifndef VAR1
static int * FUN1(int * VAR2)
{
 VAR2 = new int;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
 return VAR2;
}
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
}
#endif
