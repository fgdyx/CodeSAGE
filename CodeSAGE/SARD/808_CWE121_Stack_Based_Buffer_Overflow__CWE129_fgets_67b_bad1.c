#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE129_fgets_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 int VAR5;
 int VAR6[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR3 >= 0)
 {
 VAR6[VAR3] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN2(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
