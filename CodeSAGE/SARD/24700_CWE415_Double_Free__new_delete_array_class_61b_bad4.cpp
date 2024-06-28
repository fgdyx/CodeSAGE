#ifndef VAR1
VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = new VAR2[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR3;
 return VAR3;
}
#endif
