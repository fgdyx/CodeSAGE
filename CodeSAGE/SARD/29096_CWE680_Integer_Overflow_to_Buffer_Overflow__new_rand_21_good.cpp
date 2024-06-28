#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int FUN1(int VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 VAR4 = 20;
 }
 return VAR4;
}
static void FUN3()
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
 FUN4(VAR7[0]);
 delete [] VAR7;
 }
 ;
}
static int FUN5(int VAR4)
{
 if(VAR3)
 {
 VAR4 = 20;
 }
 return VAR4;
}
static void FUN6()
{
 int VAR4;
 VAR4 = -1;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 size_t VAR5,VAR6;
 int *VAR7;
 VAR5 = VAR4 * sizeof(int);
 VAR7 = (int*)new char[VAR5];
 for (VAR6 = 0; VAR6 < (VAR8)VAR4; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 FUN4(VAR7[0]);
 delete [] VAR7;
 }
 ;
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
