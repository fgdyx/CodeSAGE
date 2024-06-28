#ifndef VAR1
static int VAR2 = 0;
static int FUN1(int VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR3 = FUN2();
 }
 return VAR3;
}
void FUN3()
{
 int VAR3;
 VAR3 = -1;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 size_t VAR4,VAR5;
 int *VAR6;
 /* POTENTIAL FLAW: dataBytes may overflow to a small value */
 VAR4 = VAR3 * sizeof(int);
 VAR6 = (int*)new char[VAR4];
 for (VAR5 = 0; VAR5 < (VAR7)VAR3; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 FUN4(VAR6[0]);
 delete [] VAR6;
 }
 ;
}
#endif
