#ifndef VAR1
static int VAR2 = 0;
static void FUN1(long * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR3;
 }
}
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = new long;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR3;
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
