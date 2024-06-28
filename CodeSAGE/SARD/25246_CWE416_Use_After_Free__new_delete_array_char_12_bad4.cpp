#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete [] VAR2;
 }
 else
 {
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN3(VAR2);
 }
 else
 {
 ;
 }
}
#endif
