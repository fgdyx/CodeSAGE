#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = 10;
 break;
 default:
 FUN2("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR2 >= 0)
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN2("");
 }
 }
 break;
 default:
 FUN2("");
 break;
 }
}
#endif
