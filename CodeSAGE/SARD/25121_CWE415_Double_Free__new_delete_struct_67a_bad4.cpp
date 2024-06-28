#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 VAR3 * VAR4;
 structType VAR2;
 VAR4 = NULL;
 VAR4 = new VAR3;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR4;
 VAR2.VAR5 = VAR4;
 FUN1(VAR2);
}
#endif
