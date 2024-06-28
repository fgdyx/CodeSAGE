#ifndef VAR1
void FUN1(VAR2<int, long *> VAR3);
void FUN2()
{
 long * VAR4;
 VAR2<int, long *> VAR3;
 VAR4 = NULL;
 VAR4 = new long[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR4;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
