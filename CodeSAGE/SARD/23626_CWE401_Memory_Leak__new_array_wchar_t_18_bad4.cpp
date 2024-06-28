#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR4"");
 FUN2(VAR2);
 goto VAR5;
VAR5:
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
