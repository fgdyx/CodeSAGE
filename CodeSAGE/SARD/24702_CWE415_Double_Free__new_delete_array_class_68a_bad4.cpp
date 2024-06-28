#ifndef VAR1
void FUN1();
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR3;
 VAR4 = VAR3;
 FUN1();
}
#endif
