#ifndef VAR1
static int VAR2 = 0;
static void FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: No deallocation */
 ;
 }
}
void FUN2()
{
 wchar_t * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR3 = new wchar_t[100];
 wcscpy(VAR3, VAR4"");
 FUN3(VAR3);
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
