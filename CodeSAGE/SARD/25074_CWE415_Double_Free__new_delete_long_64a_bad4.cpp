#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = new long;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR3;
 FUN1(&VAR3);
}
#endif
