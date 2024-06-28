#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
 free(VAR2);
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN2(VAR2);
 }
}
#endif
