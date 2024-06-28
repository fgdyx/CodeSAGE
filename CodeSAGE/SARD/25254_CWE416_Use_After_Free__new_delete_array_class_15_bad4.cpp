#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 VAR3 = new VAR2[100];
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4].VAR5 = 1;
 VAR3[VAR4].VAR6 = 2;
 }
 }
 /* POTENTIAL FLAW: Delete data in the source - the bad sink attempts to use data */
 delete [] VAR3;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN3(VAR3[0].VAR5);
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
