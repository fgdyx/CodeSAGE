#ifndef VAR1
int * FUN1(int * VAR2)
{
 VAR2 = new int;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
 return VAR2;
}
#endif
