#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: No deallocation */
 ;
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
