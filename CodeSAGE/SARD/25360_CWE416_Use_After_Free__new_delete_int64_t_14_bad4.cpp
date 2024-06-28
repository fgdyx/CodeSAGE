#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 if(VAR4==5)
 {
 VAR3 = new VAR2;
 *VAR3 = 5LL;
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR3;
 }
 if(VAR4==5)
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(*VAR3);
 }
}
#endif
