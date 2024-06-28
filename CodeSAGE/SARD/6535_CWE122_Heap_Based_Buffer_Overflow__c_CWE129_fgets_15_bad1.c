#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 {
 int VAR5;
 int * VAR6 = (int *)malloc(10 * sizeof(int));
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN4(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR6);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
