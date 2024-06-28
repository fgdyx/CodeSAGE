#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 }
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
#endif
