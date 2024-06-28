#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN4(VAR4[VAR3]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR4);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
