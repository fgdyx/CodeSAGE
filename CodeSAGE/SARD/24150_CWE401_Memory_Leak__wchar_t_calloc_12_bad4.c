#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 }
 else
 {
 VAR2 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 wcscpy(VAR2, VAR3"");
 FUN3(VAR2);
 }
 if(FUN2())
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
 else
 {
 free(VAR2);
 }
}
#endif
