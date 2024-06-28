#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 VAR4 * VAR5;
 VAR5 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR5 = new VAR4;
 *VAR5 = 5LL;
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR5;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(*VAR5);
 }
}
#endif
