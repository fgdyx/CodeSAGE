#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 size_t VAR3,VAR4;
 int *VAR5;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR3 = VAR2 * sizeof(int);
 VAR5 = (int*)new char[VAR3];
 for (VAR4 = 0; VAR4 < (VAR6)VAR2; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 FUN2(VAR5[0]);
 delete [] VAR5;
 }
}
void FUN3()
{
 int VAR2;
 void (*VAR7) (int) = VAR8;
 VAR2 = -1;
 /* FLAW: Set data to a value that will cause an integer overflow in the call to new[] in the sink */
 VAR2 = VAR9 / 2 + 2;
 FUN4(VAR2);
}
#endif
