#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = new VAR2[100];
 /* POTENTIAL FLAW: delete the array data in the source - the bad sink deletes the array data as well */
 delete [] VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR3;
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
