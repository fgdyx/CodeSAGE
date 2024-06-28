#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete [] VAR2;
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN3(VAR2);
 }
}
#endif
