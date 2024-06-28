#ifndef VAR1
void FUN1()
{
 int VAR2;
 int VAR3;
 VAR3 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Set data to a value that will cause an integer overflow in the call to new[] in the sink */
 VAR3 = VAR4 / 2 + 2;
 }
 {
 size_t VAR5,VAR2;
 int *VAR6;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR5 = VAR3 * sizeof(int);
 VAR6 = (int*)new char[VAR5];
 for (VAR2 = 0; VAR2 < (VAR7)VAR3; VAR2++)
 {
 VAR6[VAR2] = 0;
 }
 FUN2(VAR6[0]);
 delete [] VAR6;
 }
}
#endif
