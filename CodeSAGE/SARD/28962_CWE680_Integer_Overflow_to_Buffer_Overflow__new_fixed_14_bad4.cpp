#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 /* FLAW: Set data to a value that will cause an integer overflow in the call to new[] in the sink */
 VAR2 = VAR4 / 2 + 2;
 }
 {
 size_t VAR5,VAR6;
 int *VAR7;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR5 = VAR2 * sizeof(int);
 VAR7 = (int*)new char[VAR5];
 for (VAR6 = 0; VAR6 < (VAR8)VAR2; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN2(VAR7[0]);
 delete [] VAR7;
 }
}
#endif
