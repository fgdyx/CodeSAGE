#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 /* POTENTIAL FLAW: Free data in the source - the bad sink attempts to use data */
 free(VAR2);
}
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Use of data that may have been freed */
 FUN3(VAR2);
}
#endif
