#ifndef VAR1
void FUN1(long * VAR2);
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = new long[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR2;
 FUN1(VAR2);
}
#endif
