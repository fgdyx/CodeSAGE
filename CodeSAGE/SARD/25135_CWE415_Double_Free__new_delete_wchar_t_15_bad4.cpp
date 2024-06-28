#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new wchar_t;
 /* POTENTIAL FLAW: delete data in the source - the bad sink deletes data as well */
 delete VAR2;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
