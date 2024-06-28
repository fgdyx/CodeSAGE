#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 {
 wchar_t * VAR2 = VAR3;
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
