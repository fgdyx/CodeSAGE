#ifndef VAR1
void FUN1();
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR2;
 VAR3 = VAR2;
 FUN1();
}
#endif
