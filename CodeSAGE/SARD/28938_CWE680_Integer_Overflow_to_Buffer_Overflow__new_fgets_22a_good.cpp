#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int FUN1(int VAR4);
static void FUN2()
{
 int VAR4;
 VAR4 = -1;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 size_t VAR5,VAR6;
 int *VAR7;
 VAR5 = VAR4 * sizeof(int);
 VAR7 = (int*)new char[VAR5];
 for (VAR6 = 0; VAR6 < (VAR8)VAR4; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN3(VAR7[0]);
 delete [] VAR7;
 }
 ;
}
int FUN4(int VAR4);
static void FUN5()
{
 int VAR4;
 VAR4 = -1;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 size_t VAR5,VAR6;
 int *VAR7;
 VAR5 = VAR4 * sizeof(int);
 VAR7 = (int*)new char[VAR5];
 for (VAR6 = 0; VAR6 < (VAR8)VAR4; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN3(VAR7[0]);
 delete [] VAR7;
 }
 ;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
