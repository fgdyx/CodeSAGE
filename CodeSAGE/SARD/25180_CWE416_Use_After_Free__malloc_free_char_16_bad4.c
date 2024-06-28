#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
 free(VAR2);
 break;
 }
 while(1)
 {
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN2(VAR2);
 break;
 }
}
#endif
