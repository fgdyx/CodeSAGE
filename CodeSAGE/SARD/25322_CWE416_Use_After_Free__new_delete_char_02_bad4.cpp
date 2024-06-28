#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new char;
 *VAR2 = '';
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR2;
 }
 if(1)
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(*VAR2);
 }
}
#endif
