#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = new char;
 *VAR2 = '';
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR2;
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(*VAR2);
 break;
 }
}
#endif
