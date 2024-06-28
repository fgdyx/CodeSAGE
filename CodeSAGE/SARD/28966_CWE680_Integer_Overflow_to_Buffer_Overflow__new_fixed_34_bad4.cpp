#ifndef VAR1
void FUN1()
{
 int VAR2;
 unionType VAR3;
 VAR2 = -1;
 /* FLAW: Set data to a value that will cause an integer overflow in the call to new[] in the sink */
 VAR2 = VAR4 / 2 + 2;
 VAR3.VAR5 = VAR2;
 {
 int VAR2 = VAR3.VAR6;
 {
 size_t VAR7,VAR8;
 int *VAR9;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR7 = VAR2 * sizeof(int);
 VAR9 = (int*)new char[VAR7];
 for (VAR8 = 0; VAR8 < (VAR10)VAR2; VAR8++)
 {
 VAR9[VAR8] = 0;
 }
 FUN2(VAR9[0]);
 delete [] VAR9;
 }
 }
}
#endif
