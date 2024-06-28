#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR2;
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
