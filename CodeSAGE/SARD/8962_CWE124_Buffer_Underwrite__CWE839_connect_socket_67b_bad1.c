#ifndef VAR1
void FUN1(CWE124_Buffer_Underwrite__CWE839_connect_socket_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 int VAR5;
 int VAR6[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR3 < 10)
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
