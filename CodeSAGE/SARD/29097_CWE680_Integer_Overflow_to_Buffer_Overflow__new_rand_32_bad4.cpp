#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
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
 FUN3(VAR7[0]);
 delete [] VAR7;
 }
 }
}
#endif
