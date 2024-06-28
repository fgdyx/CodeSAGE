#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int;
 *VAR2 = 5;
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR2;
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(*VAR2);
}
#endif
