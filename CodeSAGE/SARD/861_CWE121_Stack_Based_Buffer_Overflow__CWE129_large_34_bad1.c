#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE129_large_34_unionType VAR3;
 VAR2 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = 10;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int VAR7[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
