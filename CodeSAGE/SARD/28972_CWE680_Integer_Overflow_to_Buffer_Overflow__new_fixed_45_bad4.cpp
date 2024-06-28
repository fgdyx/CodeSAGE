#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 size_t VAR4,VAR5;
 int *VAR6;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR4 = VAR2 * sizeof(int);
 VAR6 = (int*)new char[VAR4];
 for (VAR5 = 0; VAR5 < (VAR7)VAR2; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN2(VAR6[0]);
 delete [] VAR6;
 }
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 /* FLAW: Set data to a value that will cause an integer overflow in the call to new[] in the sink */
 VAR2 = VAR8 / 2 + 2;
 VAR3 = VAR2;
 FUN1();
}
#endif
