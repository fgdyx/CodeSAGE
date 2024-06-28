#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 long * VAR3;
 structType VAR2;
 VAR3 = NULL;
 VAR3 = new long[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR3;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
