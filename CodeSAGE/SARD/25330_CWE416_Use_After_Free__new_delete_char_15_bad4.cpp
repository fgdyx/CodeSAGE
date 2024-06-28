#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 VAR2 = new char;
 *VAR2 = '';
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete VAR2;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN3(*VAR2);
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
