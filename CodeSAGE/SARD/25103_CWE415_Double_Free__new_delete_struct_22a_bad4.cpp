#ifndef VAR1
int VAR2 = 0;
void FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 VAR4 = new VAR3;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR4;
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
