#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = (wchar_t *)realloc(VAR2, 100*sizeof(wchar_t));
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 }
 if(VAR3)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
