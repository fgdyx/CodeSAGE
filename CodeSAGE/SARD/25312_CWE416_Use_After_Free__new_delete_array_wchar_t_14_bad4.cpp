#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete [] VAR2;
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(VAR2);
 }
}
#endif
