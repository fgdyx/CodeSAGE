#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 }
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
 FUN3(VAR6[0]);
 delete [] VAR6;
 }
}
#endif
