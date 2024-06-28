#ifndef VAR1
void FUN1(structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 int VAR5;
 int * VAR6 = new int[10];
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR3 >= 0)
 {
 VAR6[VAR3] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN2(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR6;
 }
}
void FUN4(structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 int VAR5;
 int * VAR6 = new int[10];
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 if (VAR3 >= 0 && VAR3 < (10))
 {
 VAR6[VAR3] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN2(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR6;
 }
}
#endif
