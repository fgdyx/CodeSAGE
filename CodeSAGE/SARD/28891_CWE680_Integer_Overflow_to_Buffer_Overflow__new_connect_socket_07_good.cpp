#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 {
 size_t VAR4,VAR5;
 int *VAR6;
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
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = 20;
 }
 {
 size_t VAR4,VAR5;
 int *VAR6;
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
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
